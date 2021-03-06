#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
#include <time.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SWAP(x,y) {int temp = x; x = y; y = temp;}

typedef struct Puzzle
{
	char base[3][3];
	int row;
	int col;
} Puzzle;

void print_puzzle(Puzzle* puzzle)
{
	int r, c;
	system("cls");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			if (puzzle->base[r][c])
				printf("%3d", puzzle->base[r][c]);
			else
				printf("   ");
		}
		printf("\n");
	}
}

int is_ending(Puzzle* puzzle)
{
	int r, c;
	system("cls");
	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
		{
			if (puzzle->base[r][c] != r * 3 + c + 1)
				return(r == 2) && (c == 2);
		}
	}
	return 0;
}

void init_puzzle(Puzzle* puzzle)
{
	srand((unsigned)time(0));
	int rvalues[8] = { 1,2,3,4,5,6,7,8 };
	int rindex;
	for (int i = 0; i < 8; i++)
	{
		while (1)
		{
			rindex = rand() % 8;
			if (rvalues[rindex] != -1)
				break;
		}
		puzzle->base[i / 3][i % 3] = rvalues[rindex];
		rvalues[rindex] = -1;
	}
	puzzle->base[2][2] = 0;
	puzzle->row = 2;
	puzzle->col = 2;
}

int get_directionkey()
{
	int key = 0;
	key = _getch();
	if (key == 224)
	{
		return _getch();
	}
}

void move_puzzle(Puzzle* puzzle)
{
	int key;
	printf("방향키 선택\n");
	key = get_directionkey();

	char(*base)[3] = puzzle->base;
	switch (key)
	{
	case RIGHT :
		if (puzzle->col > 0)
		{
			SWAP(base[puzzle->row][puzzle->col], base[puzzle->row][puzzle->col - 1]);
			puzzle->col--;
		}
		return;
	case LEFT :
		if (puzzle->col < 2)
		{
			SWAP(base[puzzle->row][puzzle->col], base[puzzle->row][puzzle->col + 1]);
			puzzle->col++;
		}
		return;
	case UP :
		if (puzzle->row < 2)
		{
			SWAP(base[puzzle->row][puzzle->col], base[puzzle->row + 1][puzzle->col]);
			puzzle->row++;
		}
		return;
	case DOWN :
		if (puzzle->row > 0)
		{
			SWAP(base[puzzle->row][puzzle->col], base[puzzle->row - 1][puzzle->col]);
			puzzle->row--;
		}
		return;
	}
}

int main(void)
{
	Puzzle puzzle;
	Puzzle* ppuz = &puzzle;
	init_puzzle(ppuz);
	while (!is_ending(ppuz))
	{
		print_puzzle(ppuz);
		move_puzzle(ppuz);
	}
	print_puzzle(ppuz);

	system("pause");
	return 0;
}
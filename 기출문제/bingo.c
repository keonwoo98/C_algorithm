#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bingoGameStart();
void init(int*);
int checkBingo(int*);
void printBingoBoard(int*, int);
void inputNum(int*);

int main(void)
{
    int menu;
    while(1)
    {
        printf("1. 빙고 게임 시작\n");
        printf("2. 프로그램 종료\n");
        scanf("%d", &menu);
        switch(menu)
        {
            case 1 :
                bingoGameStart();
                break;
            default :
                return 0;
        }
        system("pause");
        system("cls");
    }
    return 0;
}

void bingoGameStart()
{
    int bingo[25];
    int count;
    init(bingo);
    while(1)
    {
        count = checkBingo(bingo);
        printBingoBoard(bingo, count);
        if(count >= 5)
            break;
        inputNum(bingo);
    }
}

void init(int *bingo)
{
    srand((unsigned int)time(NULL));
    int i;
    for(i = 0; i < 25; i++)         // bingo 초기화 (1~25)
        bingo[i] = i + 1;
    for(i = 0; i < 100; i++)        // bingo 무작위 섞기
    {
        int sour = rand() % 25;
        int dest = rand() % 25;
        int temp = bingo[sour];
        bingo[sour] = bingo[dest];
        bingo[dest] = temp;
    }
}

void printBingoBoard(int *bingo, int count)
{
    system("cls");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 1, 6, 6, 22, 6, 6, 22, 6, 6, 22, 6, 6, 22, 6, 6, 2);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(bingo[(i * 5) + j] == 35)
                printf("%c #", 5);
            else
                printf("%c%2d", 5, bingo[(i * 5) + j]);
        }
        printf("%c\n", 5);
        if(i != 4)
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 25, 6, 6, 16, 6, 6, 16, 6, 6, 16, 6, 6, 16, 6, 6, 23);
    }
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 3, 6, 6, 21, 6, 6, 21, 6, 6, 21, 6, 6, 21, 6, 6, 4);

    if(count >= 5)
        printf("%d줄 빙고로 승리했습니다.\n", count);
    else
        printf("%d줄 빙고\n", count);
}

int checkBingo(int *bingo)
{
    int bingoCheck[12] = { 0 };
    int count = 0;
    int i, j;

    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if(bingo[i * 5 + j] == 35)
                bingoCheck[i]++;
    
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            if(bingo[j * 5 + i] == 35)
                bingoCheck[i + 5]++;

    for(i = 0; i < 5; i++)
        for(j = i; j <= i; j++)
            if(bingo[i * 5 + j] == 35)
                bingoCheck[10]++;

    for(i = 4; i >= 0; i--)
        for(j = 4 - i; j >= 4 - i; j--)
            if(bingo[i * 5 + j] == 35)
                bingoCheck[11]++;

    for(i = 0; i < 12; i++)
        if(bingoCheck[i] == 5)
            count++;

    return count;
}

void inputNum(int *bingo)
{
    int num;
    int isCheck;
    while(1)
    {
        isCheck = 0;
        printf("입력 : ");
        scanf("%d", &num);
        if(num < 1 || num > 25)
            printf("1 ~ 25 사이의 숫자를 입력해주세요\n");
        else
        {
            for(int i = 0; i < 25; i++)
                if(bingo[i] == num)
                {
                    bingo[i] = 35;
                    isCheck = 1;
                }
            if(isCheck)
                break;
            else
                printf("이미 입력한 숫자입니다\n");
        }
    }
}

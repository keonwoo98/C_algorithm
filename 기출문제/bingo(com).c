#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void bingoGameStart(int *);
void printRecord(int *);
void init(int *);
int checkBingo(int *);
void printBingoBoard(int *);
void inputNum(int *, int *);
void randNum(int *, int *);

int main(void)
{
    int menu;
    int record[3] = { 0 };
    while(1)
    {
        printf("1. 빙고 게임 시작\n");
        printf("2. 전적 보기\n");
        printf("3. 프로그램 종료\n");
        printf("입력 : ");
        scanf("%d", &menu);
        switch(menu)
        {
            case 1 :
                bingoGameStart(record);
                break;
            case 2 : 
                printRecord(record);
                break;
            default :
                return 0;
        }
        system("pause");
        system("cls");
    }
    return 0;
}
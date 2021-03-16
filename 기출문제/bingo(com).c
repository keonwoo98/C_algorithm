#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <Windows.h>                // system, sleep 함수 등을 사용을 위한 헤더

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
    int record[3] = { 0 };          // 전적을 보관할 배열
    while(1)                        // 프로그램 종료 메뉴 입력하기 전까지 무한반복
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
        system("pause");            // 계속하려면 아무 키나 누르십시오.. 라는 메세지가 나오며 일시 정지
        system("cls");              // 화면 지우기
    }
    return 0;
}

void bingoGameStart(int *record)
{
    int userBingo[25];              // 유저의 빙고판
    int comBingo[25];               // 컴퓨터의 빙고판
    int userCount;                  // 유저의 빙고수
    int comCount;                   // 컴퓨터의 빙고수
    int isTurn = 0;                 // 현재 유저의 턴인지 컴퓨터의 턴인지 구분하기 위한 스위치 변수 (값이 1이면 유저의 턴)
    srand((unsigned int)time(NULL));
    init(userBingo);
    init(comBingo);

    while(1)                        // 승패가 갈리기 전까지 무한반복
    {
        userCount = checkBingo(userBingo);          // 유저의 빙고수를 체크하여 변수에 대입
        comCount = checkBingo(comBingo);            // 컴퓨터의 빙고수를 체크하여 변수에 대입
        printBingoBoard(userBingo);                 // 유저의 빙고판 출력

        printf("사용자 : %d줄 빙고\n", userCount);
        printf("컴퓨터 : %d줄 빙고\n", comCount);
        // 만약 유저의 빙고수가 5를 넘으며 현재 유저의 턴인 경우 혹은 유저의 빙고수가 5를 넘으며 컴퓨터의 빙고수가 5를 넘지 못한 경우 유저의 승리
        if((userCount >= 5 && isTurn) || (userCount >= 5 && comCount < 5))
        {
            printf("사용자의 %d줄 빙고로 승리했습니다\n", userCount);
            record[0]++;
            record[1]++;
            break;
        }
        else if(comCount >= 5)          // 컴퓨터의 빙고수가 5를 넘으면 패배
        {
            printf("컴퓨터의 %d줄 빙고로 패배했습니다\n", comCount);
            record[0]++;
            record[2]++;
            break;
        }
        isTurn = !isTurn;               // 턴을 바꿈
        if(isTurn)
            inputNum(userBingo, comBingo);          // 변수가 유저와 컴퓨터의 빙고 두 개인 이유는 입력된 숫자의 같은 숫자가 있는 경우 두 빙고판에 모두 체크해주기 위함
        else
            randNum(userBingo, comBingo);
    }
}

void printRecord(int *record)
{
    if(record[0])
    {
        printf("\n********** 현재 전적 **********\n");
        printf("%d전 %d승 %d패\n", record[0], record[1], record[2]);
    }
    else
        printf("전적이 없습니다\n");
}

void init(int *bingo)
{
    int i;
    int sour, dest;
    int temp;
    for(i = 0; i < 25; i++)
        bingo[i] = i + 1;
    for(i = 0; i < 100; i++)
    {
        sour = rand() % 25;
        dest = rand() % 25;
        temp = bingo[sour];
        bingo[sour] = bingo[dest];
        bingo[dest] = temp;
    }
}

void printBingoBoard(int *bingo)
{
    system("cls");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 1, 6, 6, 22, 6, 6, 22, 6, 6, 22, 6, 6, 22, 6, 6, 2);
    for(int i = 0; i < 5; i++)                  // 5x5 행열을 출력하기 위한 행 반복
    {
        for(int j = 0; j < 5; j++)              // 5x5 행열을 출력하기 위한 열 반복
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
}

int checkBingo(int *bingo)
{
    int bingoCheck[12] = { 0 };                 // 가로 5개, 세로 5개, 대각선 2개 = 12개
    int count = 0;
    int i, j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(bingo[i * 5 + j] == 35)          // 가로 확인(행이 같고 열이 다른 즉, 첫줄 왼쪽부터 오른쪽까지, 두번째줄 ~ 다섯번째줄)
                bingoCheck[i]++;
            if(bingo[j * 5 + i] == 35)          // 세로 확인(열이 같고 행이 다른 즉, 첫열 위부터 아래까지, 두 ~ 다섯)
                bingoCheck[i + 5]++;
        }
        for(j = i; j <= i; j++)
            if(bingo[i * 5 + j] == 35)          // 대각선 확인(행과 열이 같아서 왼쪽 위에서부터 오른쪽 아래쪽으로 가는 대각선)
                bingoCheck[10]++;
    }
    
    for(i = 4; i >= 0; i--)
        for(j = 4 - i; j >= 4 - i; j--)
            if(bingo[i * 5 + j] == 35)          // 대각선 확인(왼쪽 아래에서 오른쪽 위로 가는 대각선)
                bingoCheck[11]++;
    
    for(i = 0; i < 12; i++)
        if(bingoCheck[i] == 5)
            count++;
    
    return count;
}

void inputNum(int *userBingo, int *comBingo)
{
    int num;                    // 유저에게 입력받은 수를 저장할 변수
    int isCheck;                // 이미 입력되어 체크된 것인지 확인할 변수
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
            {
                if(userBingo[i] == num)
                {
                    userBingo[i] = 35;
                    isCheck = 1;
                }
                if(comBingo[i] == num)
                    comBingo[i] = 35;
            }
            if(isCheck)
                break;
            else
                printf("이미 입력한 숫자입니다\n");
        }
    }
}

void randNum(int *userBingo, int *comBingo)
{
    int num;                    // 컴퓨터가 랜덤으로 정한 수를 저장할 변수
    int isCheck;                // 이미 입력되어 체크된 것인지 확인할 변수
    printf("컴퓨터 차례입니다\n");
    Sleep(1000);                // 1초 멈추는 함수를 실행해 컴퓨터가 고민하는 것처럼 보여줌
    while(1)
    {
        isCheck = 0;
        num = rand() % 25 + 1;
        for(int i = 0; i < 25; i++)
        {
            if(userBingo[i] == num)
            {
                userBingo[i] = 35;
                isCheck = 1;
            }
            if(comBingo[i] == num)
                comBingo[i] = 35;
        }
        if(isCheck)
            break;
    }
    printf("컴퓨터가 입력한 숫자 : %d\n", num);
    Sleep(1500);                // 1.5초 멈춰서 유저가 충분히 반응할 수 있도록 해줌
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int lotto[6];               // 생성된 번호를 저장할 배열
    int seed;                   // 사용자에게 행운의 번호를 입력받을 변수
    int i, j;
    int temp;
    int cnt = 0;                // 중복 횟수를 세기 위한 변수

    system("title 로또 복권번호 생성기");               // 제목 지정
    system("mode con: cols=52 lines=10");          // 콘솔창 크기 지정
    system("color ec");                            // 콘솔창 배경, 전경색 지정
    printf("\t******* 로또 복권번호 생성기 *******\n\n");
    while(1)
    {
        printf("행운의 숫자를 입력해주세요(1~7) : ");
        scanf("%d", &seed);
        if(seed > 7 || seed < 1)
        {
            printf("범위 내 숫자를 입력해주세요\n");
            continue;
        }
        break;
    }

    srand(seed*(unsigned int)time(NULL));

    for(i = 0; i < 5; i++)
    {
        system("cls"); // 화면을 지우고 출력합니다. 
        printf("\t******* 로또 복권번호 생성기 *******\n\n");
        printf("☆★☆★☆★ 번호 생성중.   ☆★☆★☆★\n");
        Sleep(200); // 잠시 동작을 멈춥니다.
        system("cls"); // 다시 화면을 지우고 출력합니다.
        printf("\t******* 로또 복권번호 생성기 *******\n\n");
        printf("★☆★☆★☆ 번호 생성중..  ★☆★☆★☆\n");
        Sleep(200); // 다시 동작을 멈춥니다.
        system("cls"); // 다시 화면을 지우고 출력합니다.
        printf("\t******* 로또 복권번호 생성기 *******\n\n");
        printf("☆★☆★☆★ 번호 생성중... ★☆★☆★☆\n");
        Sleep(200); // 다시 동작을 멈춥니다.
    }

    system("cls");
    while(cnt != 7)
    {
        cnt = 0;
        for(i = 0; i < 6; i++)
        {
            temp = rand() % 45 + 1;
            lotto[i] = temp;
            for(j = 0; j < i; j++)
                if(lotto[j] == temp)
                {
                    i--;
                    cnt++;
                }
        }
    }

    for(i = 0; i < 5; i++)
        for(j = i + 1; j < 6; j++)
            if(lotto[i] > lotto[j])
            {
                temp = lotto[i];
                lotto[i] = lotto[j];
                lotto[j] = temp;
            }
    
    printf("\t******* 로또 복권번호 생성기 *******\n\n");
    printf("\a생성된 행운의 번호 : ");
    for(i = 0; i < 6; i++)
        printf("%d ", lotto[i]);
    printf("\n\n프로그램을 종료합니다\n");
    Sleep(2000);
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int com;            // 컴퓨터가 정한 임의의 숫자
    int count;          // 사용자의 시도 횟수
    int chance;         // 최대 시도 횟수
    int min;            // 범위의 최솟값
    int max;            // 범위의 최댓값
    int num;            // 사용자로부터 입력받은 숫자

    count = 0;
    chance = 5;
    min = 1;
    max = 50;           // 범위 : 1 ~ 50
    srand((unsigned int)time(NULL));
    com = rand() % max + min;

    printf("********** UP & DOWN GAME **********\n");
    printf("숫자의 범위 : %d ~ %d\n", min, max);
    printf("총 %d번의 기회가 있습니다\n", chance);
    printf("0을 입력하면 프로그램이 종료됩니다\n\n");
    while(count < chance)
    {
        printf("숫자 입력 : ");
        scanf("%d", &num);
        if(num == 0)
        {
            printf("게임을 종료합니다\n");
            return;
        }
        else if(num < min || num > max)
            printf("범위 내의 숫자를 입력해주세요\n");
        else
        {
            count++;
            if(num == com)
            {
                printf("%d번 시도 끝에 승리했습니다\n", count);
                return;
            }
            else
                printf("%d번 시도 : %s\n", count, (num > com ? "DOWN" : "UP"));
        }
    }
    printf("패배했습니다. 정답 : %d\n", com);
    return 0;
}
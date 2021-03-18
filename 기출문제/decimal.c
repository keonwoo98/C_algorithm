#include <stdio.h>

int main(void)
{
    int i;
    int num1, num2;
    int cnt = 0;

    printf("두 개의 자연수를 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        i = num1;
        num1 = num2;
        num2 = i;
    }

    for(; num1 <= num2; num1++)
    {
        for(i = 2; i <= num1; i++)          // num1을 2보다 크고 num1보다 작거나 같은 수로 나눠서
            if(num1 % i == 0)               // 그 나머지가 0이면
                break;                      // 반복 종료
        if(num1 == i)                       // 종료했을 때 num1과 i가 같으면 소수 (자기자신만으로 나누어 떨어지기 때문)
        {
            printf("%d ", num1);
            if(++cnt % 10 == 0)
                printf("\n");
        }
    }
    printf("\n출력된 소수 개수 : %d\n\n", cnt);
    return 0;
}
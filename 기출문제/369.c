#include <stdio.h>
#include <math.h>
 
int main()
{
    int max;
    int i, j, k;
    int i_cpy;
    int arr[3];
    int cnt;
    int b369;
    printf("최대 숫자를 입력해주세요(999이하) : ");
    scanf("%d", &max);
    for (i = 1; i <= max; i++)
    {
        b369 = 0;
        i_cpy = i;
        cnt = 0;
        for (j = 2, k = pow(10, j); j >= 0; j--, k = pow(10, j))
        {
            if (i_cpy / k || i_cpy == 0)
            {
                arr[cnt++] = i_cpy / k;
                i_cpy %= k;
            }
        }
        for (j = 0; j < cnt; j++)
            if (arr[j] % 3 == 0 && arr[j] != 0)
            {
                printf("짝");
                b369 = 1;
            }
        if (b369)
            printf("\n");
        else
            printf("%d\n", i);
    }
    return 0;
}
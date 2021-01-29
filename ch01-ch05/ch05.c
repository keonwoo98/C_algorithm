#include <stdio.h>
#include <stdlib.h>

// 실습 5-2
// int gcd(int x, int y)
// {
//     if(y == 0)
//         return x;
//     else
//         return gcd(y, x % y);
// }
// int main(void)
// {
//     int x, y;
//     printf("x: "); scanf("%d", &x);
//     printf("y: "); scanf("%d", &y);

//     printf("두 수의 최대공약수: %d\n", gcd(x, y));
//     return 0;
// }

// Q1
// int main(void)
// {
//     int n;
//     int i, result = 1;
//     printf("정수 입력: "); scanf("%d", &n);

//     for(i = n; i > 0; i--)
//     {
//         result *= i;
//     }
//     printf("n의 Factorial: %d\n", result);
//     return 0;
// }

// Q2
// int gcd(int x, int y)
// {
//     while(y != 0)
//     {
//         int temp = y;
//         y = x % y;
//         x = temp;
//     }
//     return x;
// }
// int main(void)
// {
//     int x, y;
//     printf("x: "); scanf("%d", &x);
//     printf("y: "); scanf("%d", &y);

//     printf("두 수의 최대공약수: %d\n", gcd(x, y));
//     return 0;
// }

// Q3
// int gcd(int x, int y)
// {
//     if(y == 0)
//         return x;
//     else
//         return gcd(y, x % y);
// }

// int gcd_array(const int a[], int n)
// {
//     if(n == 1)
//         return a[0];
//     else if(n == 2)
//         return gcd(a[0], a[1]);
//     else
//         return (gcd(a[0], gcd_array(&a[1], n - 1)));
// }

// int main(void)
// {
//     int i, n;
//     printf("배열의 길이: "); scanf("%d", &n);
//     int *a = calloc(n, sizeof(int));
//     for(i = 0; i < n; i++)
//     {
//         printf("a[%d]: ", i); 
//         scanf("%d", &a[i]);
//     }
//     printf("최대공약수는 %d입니다.\n", gcd_array(a, n));
//     free(a);
//     return 0;
// }

// 실습 5-5
#include "IntStack.h"

void recur(int n)
{
    IntStack stk;
    Initialize(&stk, 100);
Top :
    if(n > 0)
    {
        Push(&stk, n);
        n = n - 1;
        goto Top;
    }
    if(!IsEmpty(&stk))
    {
        Pop(&stk, &n);
        printf("%d\n", n);
        n = n - 2;
        goto Top;
    }
    Terminate(&stk);
}
int main(void)
{
    int x;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    recur(x);
    return 0;
}
#include <stdio.h>

// 실습 5-2
int gcd(int x, int y)
{
    if(y == 0)
        return x;
    else
        return gcd(y, x % y);
}
int main(void)
{
    int x, y;
    printf("x: "); scanf("%d", &x);
    printf("y: "); scanf("%d", &y);

    printf("두 수의 최대공약수: %d\n", gcd(x, y));
    return 0;
}
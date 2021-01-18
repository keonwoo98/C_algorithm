#include <stdio.h>
#include <string.h>

// Q7
// int main(void)
// {
//     int n=7;
//     int sum=0;

//     for(int i=0; i<=n; i++)
//     {
//         sum += i;
//     }
//     printf("sum: %d", sum);
//     return 0;
// }

// Q8
// int main(void)
// {
//     int num;
//     int sum=0;

//     printf("num: ");
//     scanf("%d", &num);

//     sum = (1+num)*(num/2)+(num%2==1 ? (1+num)/2 : 0);
//     printf("sum: %d", sum);
//     return 0;
// }

// Q9
// int Sumof(int a, int b)
// {
//     int sum=0;
//     if(a<b)
//     {
//         for(int i=a; i<=b; i++)
//             sum += i;
//     }
//     else
//     {
//         for(int i=b; i<=a; i++)
//             sum += i;
//     }
//     return sum;
// }
// int main(void)
// {
//     int num1, num2;
//     printf("insert 2 numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("sum: %d\n", Sumof(num1, num2));
//     return 0;
// }

// Q10
// int main(void)
// {
//     int a, b;
//     printf("a의 값: ");
//     scanf("%d", &a);
//     printf("b의 값: ");
//     scanf("%d", &b);
//     if(a>=b)
//     {
//         do
//         {
//             printf("a보다 큰 값을 입력하세요!\n");
//             printf("b의 값: ");
//             scanf("%d", &b);
//         } while (a>b);
//     }
//     printf("b-a는 %d 입니다.", b-a);
//     return 0;
// }

// Q11
// int main(void)
// {
//     char num[10];
//     printf("정수 입력: ");
//     scanf("%s", num);
//     int len=strlen(num);
//     printf("그 수는 %d자리입니다.", len);
//     return 0;
// }

// Q12
// int main(void)
// {
//     int i, j;
//     printf("  |  1  2  3  4  5  6  7  8  9 \n");
//     printf("--+----------------------------\n");
//     for(i=1; i<10; i++)
//     {
//         printf("%d | ", i);
//         for(j=1; j<10; j++)
//             printf("%2d ", i*j);
//         putchar('\n');
//     }
//     return 0;
// }

// Q13
// int main(void)
// {
//     int i, j;
//     printf("  |  1  2  3  4  5  6  7  8  9 \n");
//     printf("--+----------------------------\n");
//     for(i=1; i<10; i++)
//     {
//         printf("%d | ", i);
//         for(j=1; j<10; j++)
//             printf("%2d ", i+j);
//         putchar('\n');
//     }
//     return 0;
// }

// Q14
// int main(void)
// {
//     int num;
//     printf("num: ");
//     scanf("%d", &num);

//     for(int i=0; i<num; i++)
//     {
//         for(int j=0; j<num; j++)
//             printf(" * ");
//         putchar('\n');
//     }
//     return 0;
// }

// Q15
// int main(void)
// {
//     int num1, num2;
//     printf("height: ");
//     scanf("%d", &num1);
//     printf("width: ");
//     scanf("%d", &num2);

//     for(int i=0; i<num1; i++)
//     {
//         for(int j=0; j<num2; j++)
//             printf(" * ");
//         putchar('\n');
//     }
//     return 0;
// }

// Q16
// void triangleLB(int n);
// void triangleRB(int n);
// void triangleLT(int n);
// void triangleRT(int n);
// int main(void)
// {
//     int num;
//     do
//     {
//         printf("height: ");
//         scanf("%d", &num);
//     } while (num<=0);
//     triangleRT(num);
//     return 0;
// }
// void triangleLB(int n)
// {
//     int i, j;
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<=i; j++)
//             printf(" * ");
//         putchar('\n');
//     }
// }
// void triangleRB(int n)
// {
// 	int i, j;
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<n-i-1; j++)
//             putchar(' ');
//         for(j=0; j<=i; j++)
//             printf("*");
//         putchar('\n');
//     }
// }
// void triangleLT(int n)
// {
//     int i, j;
//     for(i=n; i>0; i--)
//     {
//         for(j=n; j>0; j--)
//             printf(" * ");
//         putchar('\n');
//         n--;
//     }
// }
// void triangleRT(int n)
// {
// 	int i, j;
//     int num=n;
//     for(i=n; i>0; i--)
//     {
//         for(j=num; j>n; j--)
//             putchar(' ');
//         for(j=n; j>0; j--)
//             printf("*");
//         putchar('\n');
//         n--;
//     }
// }

// Q17
// void Piramid(int n);
// int main(void)
// {
//     int num;
//     printf("몇 단: ");
//     scanf("%d", &num);
//     Piramid(num);
//     return 0;
// }
// void Piramid(int n)
// {
//     int i, j;
//     for(i=0; i<n; i++)
//     {
//         for (j=0; j<n-i-1; j++)
// 			putchar(' ');
//         for(j=0; j<i*2+1; j++)
//             putchar('*');
//         putchar('\n');
//     }
// }

// Q18
void Piramid(int n);
int main(void)
{
    int num;
    printf("몇 단: ");
    scanf("%d", &num);
    Piramid(num);
    return 0;
}
void Piramid(int n)
{
    int i, j;
    int num=1;
    for(i=n; i>0; i--)
    {
        for (j=0; j<n-i; j++)
			putchar(' ');
        for(j=0; j<i*2-1; j++)
            printf("%d", num);
        putchar('\n');
        num++;
    }
}
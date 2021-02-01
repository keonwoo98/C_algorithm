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
// #include "IntStack.h"

// void recur(int n)
// {
//     IntStack stk;
//     Initialize(&stk, 100);
// Top :
//     if(n > 0)
//     {
//         Push(&stk, n);
//         n = n - 1;
//         goto Top;
//     }
//     if(!IsEmpty(&stk))
//     {
//         Pop(&stk, &n);
//         printf("%d\n", n);
//         n = n - 2;
//         goto Top;
//     }
//     Terminate(&stk);
// }
// int main(void)
// {
//     int x;
//     printf("정수를 입력하세요: ");
//     scanf("%d", &x);
//     recur(x);
//     return 0;
// }

// 실습 5-6
// void move(int no, int x, int y)
// {
//     if(no > 1)
//         move(no - 1, x, 6 - x- y);
//     printf("원반[%d]를(을) %d 기둥에서 %d 기둥으로 옮김\n", no, x, y);

//     if(no > 1)
//         move(no - 1, 6 - x - y, y);
// }
// int main(void)
// {
//     int n;
//     printf("하노이의 탑\n원반 개수 : ");
//     scanf("%d", &n);
//     move(n, 1, 3);
//     return 0;
// }

// recur3
// void recur3(int n)
// {
//     if(n > 0)
//     {
//         recur3(n - 1);
//         recur3(n - 2);
//         printf("%d\n", n);
//     }
// }
// int main(void)
// {
//     int n;
//     printf("insert n: ");
//     scanf("%d", &n);
//     recur3(n);
//     return 0;
// }

// Q5
// #include "IntStack.h"
// void recur3(int n)
// {
// 	int sw = 0;
// 	IntStack nstk, sstk;			/* 스택 */

// 	Initialize(&nstk, 100);
// 	Initialize(&sstk, 100);

// 	while (1) {
// 		if (n > 0) {
// 			Push(&nstk, n);
// 			Push(&sstk, sw);

// 			if (sw == 0)
// 				n = n - 1;
// 			else if (sw == 1) {
// 				n = n - 2;
// 				sw = 0;
// 			}
// 			continue;
// 		}
// 		do {
// 			Pop(&nstk, &n);
// 			Pop(&sstk, &sw);
// 			sw++;

// 			if (sw == 2) {
// 				printf("%d\n", n);
// 				if (IsEmpty(&nstk))
// 					return;
// 			}
// 		} while (sw == 2);
// 	}

// 	Terminate(&nstk);
// 	Terminate(&sstk);
// }

// int main(void)
// {
// 	int x;

// 	printf("정수를 입력하세요. : ");
// 	scanf("%d", &x);

// 	recur3(x);

// 	return 0;
// }

// Q6
// void move(int no, int x, int y)
// {
//     if(no > 1)
//         move(no - 1, x, 6 - x- y);
//     printf("원반[%d]를(을) %c 기둥에서 %c 기둥으로 옮김\n", no, x + 64, y + 64);

//     if(no > 1)
//         move(no - 1, 6 - x - y, y);
// }
// int main(void)
// {
//     int n;
//     printf("하노이의 탑\n원반 개수 : ");
//     scanf("%d", &n);
//     move(n, 1, 3);
//     return 0;
// }


// Q6
// void move(int no, int x, int y)
// {
// 	char *name[] = { "Ａ기둥", "Ｂ기둥", "Ｃ기둥" };

// 	if (no > 1)
// 		move(no - 1, x, 6 - x - y);

// 	printf("원반[%d]를 %s에서 %s로 이동\n", no, name[x - 1], name[y - 1]);

// 	if (no > 1)
// 		move(no - 1, 6 - x - y, y);
// }

// int main(void)
// {
// 	int n;

// 	printf("하노이 탑\n원반 개수 : ");
// 	scanf("%d", &n);

// 	move(n, 1, 3);

// 	return 0;
// }

// Q7
// #include "IntStack.h"

// void move(int no, int x, int y)
// {
//     int sw = 0;
// 	IntStack xstk, ystk, sstk;		/* 스택 */

// 	Initialize(&xstk, 100);
// 	Initialize(&ystk, 100);
// 	Initialize(&sstk, 100);

// 	while (1) {
// 		if (sw == 0 && no > 1) {
// 			Push(&xstk, x);				/* x 값을 푸시 */
// 			Push(&ystk, y);				/* y 값을 푸시 */
// 			Push(&sstk, sw);			/* sw 값을 푸시 */
// 			no = no - 1;
// 			y = 6 - x - y;
// 			continue;
// 		}

// 		printf("원반[%d]를 %d 기둥에서 %d 기둥으로 이동\n", no, x, y);

// 		if (sw == 1 && no > 1) {
// 			Push(&xstk, x);				/* x 값을 푸시 */
// 			Push(&ystk, y);				/* y 값을 푸시 */
// 			Push(&sstk, sw);			/* sw 값을 푸시 */
// 			no = no - 1;
// 			x = 6 - x - y;
// 			if (++sw == 2) sw = 0;
// 			continue;
// 		}
// 		do {
// 			if (IsEmpty(&xstk))			/* 스택이 비어있는 상태라면 */
// 				return;
// 			Pop(&xstk, &x);				/* x를 팝 */
// 			Pop(&ystk, &y);				/* y를 팝 */
// 			Pop(&sstk, &sw);			/* sw를 팝 */
// 			sw++;
// 			no++;
// 		} while (sw == 2);
// 	}

// 	Terminate(&xstk);
// 	Terminate(&ystk);
// 	Terminate(&sstk);
// }

// int main(void)
// {
//     int n;
//     printf("하노이의 탑\n원반 개수: ");
//     scanf("%d", &n);
//     move(n, 1, 3);
//     return 0;
// }

// 실습 5-7
// int pos[8];

// void print(void)
// {
//     int i;
//     for(i = 0; i < 8; i++)
//         printf("%2d", pos[i]);
//     putchar('\n');
// }

// void set(int i)
// {
//     int j;
//     for(j = 0; j < 8; j++)
//     {
//         pos[i] = j;
//         if(i == 7)
//             print();
//         else
//             set(i + 1);
//     }
// }

// int main(void)
// {
//     set(0);
//     return 0;
// }

// 실습 5-8
// int flag[8];
// int pos[8];

// void print(void)
// {
//     int i;
//     for(i = 0; i < 8; i++)
//         printf("%2d", pos[i]);
//     putchar('\n');
// }

// void set(int i)
// {
//     int j;
//     for(j = 0; j < 8; j++)
//     {
//         if(!flag[j])
//         {
//             pos[i] = j;
//             if(i == 7)
//                 print();
//             else
//             {
//                 flag[j] = 1;
//                 set(i + 1);
//                 flag[j] = 0;
//             }
//         }
//     }
// }

// int main(void)
// {
//     int i;
//     for(i = 0; i < 8; i++)
//         flag[i] = 0;
//     set(0);

//     return 0;
// }

// 실습 5-9
int flag_a[8];
int flag_b[15];
int flag_c[15];
int pos[8];

void print(void)
{
    int i;
    for(i = 0; i < 8; i++)
        printf("%2d", pos[i]);
    putchar('\n');
}

void set(int i)
{
    int j;
    for(j = 0; j < 8; j++)
    {
        if(!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7])
        {
            pos[i] = j;
            if(i == 7)
                print();
            else
            {
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 1;
                set(i + 1);
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
            }
        }
    }
}

int main(void)
{
    int i;
    for(i = 0; i < 8; i++)
        flag_a[i] = 0;
    for(i = 0; i < 15; i++)
        flag_b[i] = flag_c[i] = 0;
    set(0);

    return 0;
}
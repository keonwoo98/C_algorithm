#include <stdio.h>
#include <stdlib.h>

// 실습 6-1
// #define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

// void bubble(int a[], int n)
// {
//     int i, j;
//     for(i = 0; i < n - 1; i++)
//     {
//         for(j = n - 1; j > i; j--)
//             if(a[j - 1] > a[j])
//                 swap(int, a[j - 1], a[j]);
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     puts("버블 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     bubble(x, nx);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);

//     free(x);
//     return 0;
// }

// Q1
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void bubble(int a[], int n)
// {
//     int i, j;
//     for(i = n - 1; i > 0; i--)
//     {
//         for(j = 0; j < i; j++)
//             if(a[j] > a[j + 1])
//                 swap(int, a[j], a[j + 1]);
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     puts("버블 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     bubble(x, nx);
//     puts("오름차순 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);

//     free(x);
//     return 0;
// }

// Q2
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void bubble(int a[], int n)
// {
//     int i, j, m;
//     int ccnt = 0;
//     int scnt = 0;
    
//     for(i = 0; i < n - 1; i++)
//     {
//         printf("패스%d\n", i + 1);
//         for(j = n - 1; j > i; j--)
//         {
//             for(m = 0; m < n - 1; m++)
//                 printf("%3d %c", a[m], (m != j - 1) ? ' ' : (a[j - 1] > a[j] ? '+' : '-'));

//             printf("%3d\n", a[n - 1]);
//             ccnt++;
//             if(a[j - 1] > a[j])
//             {
//                 swap(int, a[j - 1], a[j]);
//                 scnt++;
//             }
//         }
//         for(m = 0; m < n; m++)
//             printf("%3d ", a[m]);
//         putchar('\n');
//     }
//     printf("비교 %d회\n", ccnt);
//     printf("교환 %d회\n", scnt);
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     printf("요소 개수 : ");
//     scanf("%d", &nx);

//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", x[i]);
//         scanf("%d", &x[i]);
//     }
    
//     bubble(x, nx);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q3
// int is_sorted(const int a[], int n)
// {
//     int i;
//     for(i = n - 1; i > 0; i--)
//     {
//         if(a[i - 1] > a[i])
//             return 0;
//     }
//     return 1;
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     printf("요소 개수 : ");
//     scanf("%d", &nx);

//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     if(is_sorted(x, nx) == 0)
//         printf("정렬되지 않았습니다.\n");
//     else
//         printf("정렬되었습니다.\n");
    
//     free(x);
//     return 0;
// }

// Q4
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void bubble(int a[], int n)
// {
//     int i, j, m;
//     int ccnt = 0;
//     int scnt = 0;
    
//     for(i = 0; i < n - 1; i++)
//     {
//         int exchg = 0;
//         printf("패스%d\n", i + 1);
//         for(j = n - 1; j > i; j--)
//         {
//             for(m = 0; m < n - 1; m++)
//                 printf("%3d  %c", a[m], (m != j - 1) ? ' ' : (a[j - 1] > a[j] ? '+' : '-'));

//             printf("%3d\n", a[n - 1]);
//             ccnt++;
//             if(a[j - 1] > a[j])
//             {
//                 swap(int, a[j - 1], a[j]);
//                 exchg++;
//                 scnt++;
//             }
//         }
//         for(m = 0; m < n; m++)
//             printf("%3d ", a[m]);
//         putchar('\n');
//         if(exchg == 0) break;
//     }
//     printf("비교 %d회\n", ccnt);
//     printf("교환 %d회\n", scnt);
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     printf("요소 개수 : ");
//     scanf("%d", &nx);

//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", x[i]);
//         scanf("%d", &x[i]);
//     }
    
//     bubble(x, nx);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q5
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void bubble(int a[], int n)
// {
//     int m;
//     int i = 0;
//     int ccnt = 0;
//     int scnt = 0;
//     int k = 0;
//     while(k < n - 1)
//     {
//         int j;
//         int last = n - 1;
//         printf("패스%d\n", ++i);

//         for(j = n - 1; j > k; j--)
//         {
//             for(m = 0; m < n - 1; m++)
//                 printf("%3d  %c", a[m], (m != j - 1) ? ' ' : (a[j - 1] > a[j] ? '+' : '-'));
//             printf("%3d\n", a[n - 1]);
//             ccnt++;

//             if(a[j - 1] > a[j])
//             {
//                 swap(int, a[j - 1], a[j]);
//                 scnt++;
//                 last = j;
//             }
//         }
//         k = last;
//         for(m = 0; m < n; m++)
//             printf("%3d   ", a[m]);
//         putchar('\n');
//     }
//     printf("비교 %d회\n", ccnt);
//     printf("교환 %d회\n", scnt);
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     printf("요소 개수 : ");
//     scanf("%d", &nx);

//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
    
//     bubble(x, nx);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q6
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void shaker(int a[], int n)
// {
//     int left = 0;
//     int right = n - 1;
//     int last = right;

//     while(left < right)
//     {
//         int j;
//         for(j = right; j > left; j--)
//         {
//             if(a[j - 1] > a[j])
//             {
//                 swap(int, a[j - 1], a[j]);
//                 last = j;
//             }
//         }
//         left = last;

//         for(j = left; j < right; j++)
//         {
//             if(a[j] > a[j + 1])
//             {
//                 swap(int, a[j], a[j + 1]);
//                 last = j;
//             }
//         }
//         right = last;
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     printf("요소 개수 : ");
//     scanf("%d", &nx);

//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
    
//     shaker(x, nx);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// 실습 6-4
#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)
#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))

void selection(int a[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        int min = i;
        for(j = i + 1; j < n; j++)
            if(a[j] < a[min])
                min = j;
                
        swap(int, a[i], a[min]);
    }
}

int main(void)
{
    int i, nx;
    int *x;

    printf("요소 개수 : ");
    scanf("%d", &nx);

    x = calloc(nx, sizeof(int));

    for(i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    
    selection(x, nx);
    puts("오름차순으로 정렬");
    for(i = 0; i < nx; i++)
        printf("x[%d] : %d\n", i, x[i]);
    
    free(x);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Q1
// int minof (const int a[], int n)
// {
//     int min=a[0];
//     for(int i=1; i<n; i++)
//     {
//         if(min>a[i])
//             min=a[i];
//     }
//     return min;
// }
// int main(void)
// {
//     int *height;
//     int number;
//     printf("사람 수: ");
//     scanf("%d", &number);
//     height=calloc(number, sizeof(int));
//     printf("%d 사람의 키를 입력하세요\n", number);
//     for(int i=0; i<number; i++)
//     {
//         printf("사람%d: ", i+1);
//         scanf("%d", &height[i]);
//     }
//     printf("최솟값: %d", minof(height, number));
//     free(height);
//     return 0;
// }

// Q2
// int sumof (const int a[], int n)
// {
//     int sum=0;
//     for(int i=0; i<n; i++)
//     {
//         sum += a[i];
//     }
//     return sum;
// }
// int main(void)
// {
//     int *height;
//     int number;
//     printf("사람 수: ");
//     scanf("%d", &number);
//     height=calloc(number, sizeof(int));
//     printf("%d 사람의 키를 입력하세요\n", number);
//     for(int i=0; i<number; i++)
//     {
//         printf("사람%d: ", i+1);
//         scanf("%d", &height[i]);
//     }
//     printf("합계: %d", sumof(height, number));
//     free(height);
//     return 0;
// }

// Q3
// double aveof (const int a[], int n)
// {
//     int sum=0;
//     double ave;
//     for(int i=0; i<n; i++)
//     {
//         sum += a[i];
//     }
//     ave=sum/n;
//     return ave;
// }
// int main(void)
// {
//     int *height;
//     int number;
//     printf("사람 수: ");
//     scanf("%d", &number);
//     height=calloc(number, sizeof(int));
//     printf("%d 사람의 키를 입력하세요\n", number);
//     for(int i=0; i<number; i++)
//     {
//         printf("사람%d: ", i+1);
//         scanf("%d", &height[i]);
//     }
//     printf("평균: %f", aveof(height, number));
//     free(height);
//     return 0;
// }

// Q4
// #include <time.h>
// int maxof (const int a[], int n)
// {
//     int max=a[0];
//     for(int i=0; i<n; i++)
//         if(max<a[i]) max=a[i];
//     return max;
// }
// int main(void)
// {
//     int *height;
//     int number;
//     srand(time(NULL));
//     number=rand()%10+1;
//     height=calloc(number, sizeof(int));
//     for(int i=0; i<number; i++)
//     {
//         height[i]=rand()%100+100;
//         printf("height[%d]: %d\n", i, height[i]);
//     }
//     printf("최댓값: %d", maxof(height, number));
//     free(height);
//     return 0;
// }

// Q5
// #define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)
// void ary_reverse(int a[], int n)
// {
//     for(int i=0; i<n/2; i++)
//     {
//         for(int j=0; j<n; j++)
//             printf("%d ", a[j]);
//         printf("\na[%d]과 a[%d]를 교환합니다\n", i, n-i-1);
//         swap(int, a[i], a[n-i-1]);
//     }
//     for(int j=0; j<n; j++)
//             printf("%d ", a[j]);
// }
// int main(void)
// {
//     int i;
//     int *x;
//     int nx;

//     printf("요소 개수: ");
//     scanf("%d", &nx);
//     x=calloc(nx, sizeof(int));
//     printf("%d개의 정수를 입력하세요\n", nx);
//     for(i=0; i<nx; i++)
//     {
//         printf("x[%d]: ", i);
//         scanf("%d", &x[i]);
//     }
//     ary_reverse(x, nx);
//     printf("\n배열의 요소를 역순으로 정렬했습니다\n");
//     free(x);
//     return 0;
// }

// Q6
#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)
int card_convr(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits=0;
    if(x==0)
        d[digits++] = dchar[0];
    else
        while(x)
        {
            d[digits++]=dchar[x%n];
            x/=n;
        }
    for(int i=0; i<digits/2; i++)
        swap(char, d[i], d[digits-i-1]);
    return digits;
}
int main(void)
{
    int i;
    unsigned no; // 정수
    int cd; // 기수
    int dno; // 변환 후 자릿수
    char cno[512];
    int retry;
    puts("10진수를 기수 변환합니다.");
    do
    {
        printf("변환하는 음이 아닌 정수: ");
        scanf("%d", &no);
        do
        {
            printf("어떤 진수로 변환할까요?(2-36): ");
            scanf("%d", &cd);
        } while (cd<2 || cd>36);
        dno=card_convr(no, cd, cno);
        printf("%d진수로는", cd);
        for(i=0; i<dno; i++)
            printf("%c", cno[i]);
        printf("입니다.\n");
        printf("한 번 더 할까요?(1 --- 예 / 0 --- 아니오): ");
        scanf("%d", &retry);
    } while (retry==1);
    return 0;
}

// Q7
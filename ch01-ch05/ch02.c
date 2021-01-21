#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
// #define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)
// int card_convr(unsigned x, int n, char d[])
// {
//     char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     int digits=0;
//     if(x==0)
//         d[digits++] = dchar[0];
//     else
//         while(x)
//         {
//             d[digits++]=dchar[x%n];
//             x/=n;
//         }
//     for(int i=0; i<digits/2; i++)
//         swap(char, d[i], d[digits-i-1]);
//     return digits;
// }
// int main(void)
// {
//     int i;
//     unsigned no; // 정수
//     int cd; // 기수
//     int dno; // 변환 후 자릿수
//     char cno[512];
//     int retry;
//     puts("10진수를 기수 변환합니다.");
//     do
//     {
//         printf("변환하는 음이 아닌 정수: ");
//         scanf("%d", &no);
//         do
//         {
//             printf("어떤 진수로 변환할까요?(2-36): ");
//             scanf("%d", &cd);
//         } while (cd<2 || cd>36);
//         dno=card_convr(no, cd, cno);
//         printf("%d진수로는", cd);
//         for(i=0; i<dno; i++)
//             printf("%c", cno[i]);
//         printf("입니다.\n");
//         printf("한 번 더 할까요?(1 --- 예 / 0 --- 아니오): ");
//         scanf("%d", &retry);
//     } while (retry==1);
//     return 0;
// }

// Q7
// #define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)
// int card_convr(unsigned x, int n, char d[])
// {
//     char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     int digits=0;
//     if(x==0)
//         d[digits++] = dchar[0];
//     else
//         while (x) {
// 			printf("%2d | %7d ... %c\n", n, x, dchar[x % n]);
// 			printf("   + ---------- \n");
// 			d[digits++] = dchar[x % n];				 /* n으로 나눈 나머지를 넣어둠 */
// 			x /= n;
// 		}
// 		printf("%12d\n", x);
//     for(int i=0; i<digits/2; i++)
//         swap(char, d[i], d[digits-i-1]);
//     return digits;
// }
// int main(void)
// {
//     int i;
//     unsigned no; // 정수
//     int cd; // 기수
//     int dno; // 변환 후 자릿수
//     char cno[512];
//     int retry;
//     puts("10진수를 기수 변환합니다.");
//     do
//     {
//         printf("변환하는 음이 아닌 정수: ");
//         scanf("%d", &no);
//         do
//         {
//             printf("어떤 진수로 변환할까요?(2-36): ");
//             scanf("%d", &cd);
//         } while (cd<2 || cd>36);
//         dno=card_convr(no, cd, cno);
//         printf("%d진수로는", cd);
//         for(i=0; i<dno; i++)
//             printf("%c", cno[i]);
//         printf("입니다.\n");
//         printf("한 번 더 할까요?(1 --- 예 / 0 --- 아니오): ");
//         scanf("%d", &retry);
//     } while (retry==1);
//     return 0;
// }

// Q8
// void ary_copy(int a[], const int b[], int n)
// {
//     for(int i=0; i<n; i++)
//         a[i]=b[i];
// }
// int main(void)
// {
//     int n;
//     printf("배열의 길이: ");
//     scanf("%d", &n);
//     int *a = calloc(n, sizeof(int));
//     int *b = calloc(n, sizeof(int));
//     for(int i=0; i<n; i++)
//     {
//         printf("a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
//     ary_copy(b, a, n);
//     for(int i=0; i<n; i++)
//         printf("%d ", b[i]);
//     free(a);
//     free(b);
//     return 0;
// }

// Q9
// void ary_rev_copy(int a[], const int b[], int n)
// {
//     for(int i=0; i<n; i++)
//         a[i]=b[n-i-1];
// }
// int main(void)
// {
//     int n;
//     printf("배열의 길이: ");
//     scanf("%d", &n);
//     int *a = calloc(n, sizeof(int));
//     int *b = calloc(n, sizeof(int));
//     for(int i=0; i<n; i++)
//     {
//         printf("a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
//     ary_rev_copy(b, a, n);
//     for(int i=0; i<n; i++)
//         printf("%d ", b[i]);
//     free(a);
//     free(b);
//     return 0;
// }

// Q10
// #define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)
// void shuffle(int a[], int n)
// {
//     srand(time(NULL));
//     for(int i=n-1; i>=0; i--)
//     {
//         int j=rand()%(i+1);
//         if(i!=j)
//             swap(int, a[i], a[j]);
//     }
// }
// int main(void)
// {
//     int i;
//     int num;
//     printf("배열의 길이: ");
//     scanf("%d", &num);
//     int *arr=calloc(num, sizeof(int));
//     for(i=0; i<num; i++)
//     {
//         printf("arr[%d]: ", i);
//         scanf("%d", &arr[i]);
//     }
//     shuffle(arr, num);
//     printf("\nShuffled!\n");
//     for(i=0; i<num; i++)
//         printf("arr[%d]: %d\n", i, arr[i]);
//     free(arr);
//     return 0;
// }

// 실습 2-10
// int main(void)
// {
//     int i, n;
//     int prime[500];             // 소수를 저장하는 배열
//     int ptr=0;                  // 이미 얻은 소수의 개수
//     unsigned long counter;      // 나눗셈 횟수
//     prime[ptr++]=2;
//     for(n=3; n<=1000; n+=2)
//     {
//         for(i=1; i<ptr; i++)
//         {
//             counter++;
//             if(n%prime[i]==0)
//                 break;
//         }
//         if(ptr==i)
//             prime[ptr++]=n;
//     }
//     for(i=0; i<ptr; i++)
//         printf("%d\n", prime[i]);
//     printf("나눗셈을 실행한 횟수: %lu\n", counter);
//     return 0;
// }

// 실습 2-11
// int main(void)
// {
//     int i, n;
//     int prime[500];
//     int ptr=0;
//     unsigned long counter=0;
//     prime[ptr++]=2;
//     prime[ptr++]=3;
//     for(n=5; n<=1000; n+=2)
//     {
//         int flag=0;
//         for(i=1; counter++, prime[i]*prime[i]<=n; i++)
//         {
//             counter++;
//             if(n%prime[i]==0)
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if(!flag)
//             prime[ptr++]=n;
//     }
//     for(i=0; i<ptr; i++)
//         printf("%d\n", prime[i]);
//     printf("곱셈과 나눗셈을 실행한 횟수: %lu\n", counter);
//     return 0;
// }

// Q11
// int mdays[][12]={
//     {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
//     {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
// };
// int isleap(int year)
// {
//     return year%4==0 && year%100!=0 || year%400==0;
// }
// int dayofyear(int y, int m, int d)
// {
//     // int i;
//     // int days=d;
//     // for(i=1; i<m; i++)
//     //     days+=mdays[isleap(y)][i-1];
//     // return days;
//     while(m--)
//         d+=mdays[isleap(y)][m-1];
//     return d;
// }
// int main(void)
// {
//     int year, month, day;
//     int retry;
//     do
//     {
//         printf("년: "); scanf("%d", &year);
//         printf("월: "); scanf("%d", &month);
//         printf("일: "); scanf("%d", &day);
//         printf("%d년의 %d일째입니다.\n", year, dayofyear(year, month, day));
//         printf("다시 할까요?(1 ---예 / 0 ---아니오): ");
//         scanf("%d", &retry);
//     } while (retry==1);
//     return 0;
// }

// Q12
// #define VMAX 21

// typedef struct{
//     char name[20];
//     int height;
//     double vision;
// } PhysCheck;

// double ave_height(const PhysCheck dat[], int n)
// {
//     int i;
//     double sum = 0;
//     for(i=0; i<n; i++)
//         sum += dat[i].height;
//     return sum / n;
// }

// void dist_vision(const PhysCheck dat[], int n, int dist[])
// {
//     int i;
//     for(i=0; i<VMAX; i++)
//         dist[i]=0;
//     for(i=0; i<n; i++)
//     {
//         if(dat[i].vision >= 0.0 && dat[i].vision <= VMAX/10.0)
//             dist[(char)(dat[i].vision * 10)]++;
//     }
// }

// int main(void)
// {
//     int i;
//     PhysCheck x[] = {
//         {"박현규", 162, 0.3},
//         {"함진아", 172, 0.7},
//         {"최윤미", 175, 2.0},
//         {"홍연의", 171, 1.5},
//         {"이수진", 168, 0.4},
//         {"김영준", 174, 1.2},
//         {"박용규", 169, 0.8}
//     };
//     int nx = sizeof(x) / sizeof(x[0]);      // 사람 수
//     int vdist[VMAX];
//     puts("■ ◻︎ ■ 신체검사표 ■ ◻︎ ■");
//     puts("이름             키  시력");
//     puts("--------------------------");
//     for(i=0; i<nx; i++)
//         printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
//     printf("\n 평균 키: %5.1f cm\n", ave_height(x, nx));
//     dist_vision(x, nx, vdist);
//     printf("\n 시력 분포\n");
//     for(i=0; i<VMAX; i++)
//     {
//         printf("%3.1f ~ : ", i/10.0);
//         for(int j=0; j<vdist[i]; j++)
//             putchar('*');
//         putchar('\n');
//     }
//     return 0;
// }

// Q13
typedef struct
{
    int y;
    int m;
    int d;
} Date;

int mdays[][12]={
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year)
{
    return year%4==0 && year%100!=0 || year%400==0;
}


Date After(Date x, int n)
{
    if(n<0)
        n = -n;
    x.d += n;
    while(x.d>mdays[isleap(x.y)][x.m-1])
    {
        x.d -= mdays[isleap(x.y)][x.m-1];
        if(++x.m > 12)
        {
            x.y++;
            x.m=1;
        }
    }
    return x;
}

Date Before(Date x, int n)
{
    if(n<0)
        n = -n;
    x.d -= n;
    while(x.d<1)
    {
        if(--x.m<1)
        {
            x.y--;
            x.m=12;
        }
        x.d += mdays[isleap(x.y)][x.m-1];
    }
    return x;
}

void Print(Date x)
{
    int y = x.y;
    int m = x.m;
    int d = x.d;

    char * ws[] = {"일", "월", "화", "수", "목", "금", "토"};
    if(m==1 || m==2)
    {
        y--;
        m += 12;
    }
    printf("%04d년 %02d월 %02d일(%s)", x.y, x.m, x.d, ws[(y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7]);
}

int main(void)
{
    int n;
    Date day;
    printf("year: ");
    scanf("%d", &day.y);
    printf("month: ");
    scanf("%d", &day.m);
    printf("day: ");
    scanf("%d", &day.d);

    printf("며칠 앞 / 뒤의 날짜를 구할까요? : ");
    scanf("%d", &n);

    printf("%d 일 뒤의 날짜 : ", n); Print(After(day, n)); putchar('\n');
    printf("%d 일 앞의 날짜 : ", n); Print(Before(day, n)); putchar('\n');

    return 0;
}
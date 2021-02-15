#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void selection(int a[], int n)
// {
//     int i, j;
//     for(i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         for(j = i + 1; j < n; j++)
//             if(a[j] < a[min])
//                 min = j;
                
//         swap(int, a[i], a[min]);
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
    
//     selection(x, nx);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// 실습 6-5
// void insertion(int a[], int n)
// {
//     int i, j;
//     for(i = 1; i < n; i++)
//     {
//         int tmp = a[i];
//         for(j = i; j > 0 && a[j - 1] > tmp; j--)
//             a[j] = a[j - 1];
//         a[j] = tmp;
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("단순 삽입 정렬");

//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     insertion(x, nx);

//     puts("오름차순으로 정렬했습니다");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);

//     free(x);
//     return 0;
// }

// Q7
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void selection(int a[], int n)
// {
//     int i, j, m;
//     for(i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         for(j = i + 1; j < n; j++)
//             if(a[j] < a[min])
//                 min = j;

//         for(m = 0; m < n; m++)
//             printf((m == i) ? "  * " : (m == min) ? "  + " : "    ");
//         putchar('\n');
//         for(m = 0; m < n; m++)
//             printf("%3d ", a[m]);
//         putchar('\n');
                
//         swap(int, a[i], a[min]);
//     }
//     for(m = 0; m < n; m++)
//             printf("%3d ", a[m]);
//         putchar('\n');
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
//     selection(x, nx);
//     puts("오름차순으로 정렬했습니다");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);

//     free(x);
//     return 0;
// }

// Q8
// void insertion(int a[], int n)
// {
//     int i, j, m;
//     for(i = 1; i < n; i++)
//     {
//         int tmp = a[i];

//         for(m = 0; m < n; m++)
//             printf("%3d", a[m]);
//         putchar('\n');

//         for(j = i; j > 0 && a[j - 1] > tmp; j--)
//             a[j] = a[j - 1];
//         a[j] = tmp;

//         printf("%*s%s", 3 * j, "", (i != j) ? " ^-" : "  ");
//         for(m = 1; m < 3 * (i - j); m++)
//             putchar('-');
//         printf("+\n\n");
//     }
//     for(m = 0; m < n; m++)
//         printf("%3d", a[m]);
//     putchar('\n');
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("단순 삽입 정렬");

//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     insertion(x, nx);

//     puts("\n오름차순 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q9
// void insertion(int a[], int n)
// {
//     int i, j;
//     for(i = 1; i < n; i++)
//     {
//         int tmp = a[0] = a[i];
//         for(j = i; a[j - 1] > tmp; j--)
//             a[j] = a[j - 1];
//         if(j)
//             a[j] = tmp;
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int* x;
//     puts("단순 삽입 정렬");
    
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx + 1, sizeof(int));

//     for(i = 1; i < nx + 1; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     insertion(x, nx + 1);

//     puts("\n오름차순으로 정렬");
//     for(i = 1; i < nx + 1; i++)
//         printf("x[%d] : %d\n", i, x[i]);
//     free(x);
//     return 0;
// }

// Q10
// void bin_insertion(int a[], int n)
// {
//     int i, j;
//     for(i = 1; i < n; i++)
//     {
//         int key = a[i];
//         int pl = 0;
//         int pr = i - 1;
//         int pc;
//         int pd;

//         do
//         {
//             pc = (pl + pr) / 2;
//             if(a[pc] == key)
//                 pl = pc + 1;
//             else if(a[pc] < key)
//                 pl = pc + 1;
//             else
//                 pr = pc - 1;
//         } while (pl <= pr);
        
//         pd = (pl <=pr) ? pc + 1 : pr + 1;

//         for(j = i; j > pd; j--)
//             a[j] = a[j - 1];
//         a[pd] = key;
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("단순 삽입 정렬");

//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     bin_insertion(x, nx);

//     puts("\n오름차순 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
//     free(x);
//     return 0;
// }

// Q11
// void bin_insertion(int a[], int n)
// {
// 	int i;
// 	for (i = 1; i < n; i++) {
// 		int key = a[i];
// 		int pl = 0;		
// 		int pr = i - 1;	
// 		int pc;			
// 		int pd;			

// 		do {
// 			pc = (pl + pr) / 2;
// 			if (a[pc] == key)		
// 				break;
// 			else if (a[pc] < key)
// 				pl = pc + 1;
// 			else
// 				pr = pc - 1;
// 		} while (pl <= pr);
// 		pd = (pl <= pr) ? pc + 1 : pr + 1;

// 		memmove(&a[pd + 1], &a[pd], (i - pd) * sizeof(int));
// 		a[pd] = key;
// 	}
// }

// int main(void)
// {
// 	int i, nx;
// 	int *x;		

// 	puts("이진 삽입 정렬");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}

// 	bin_insertion(x, nx);		

// 	puts("오름차순으로 정렬했습니다.");
// 	for (i = 0; i < nx; i++)
// 		printf("x[%d] = %d\n", i, x[i]);

// 	free(x);	

// 	return 0;
// }

// 실습 6-6
// void shell(int a[], int n)
// {
//     int i, j, h;
//     for(h = n / 2; h > 0; h /= 2)
//         for(i = h; i < n; i++)
//         {
//             int tmp = a[i];
//             for(j = i - h; j >= 0 && a[j] > tmp; j -= h)
//                 a[j + h] = a[j];
//             a[j + h] = tmp;
//         }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("셀 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
//     shell(x, nx);
//     puts("오름차순으로 정렬했습니다.");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
//     free(x);
//     return 0;
// }

// 실습 6-7
// void shell(int a[], int n)
// {
//     int i, j, h;
//     for(h = 1; h < n / 9; h = h * 3 + 1)
//         ;
//     for(; h > 0; h /= 3)
//         for(i = h; i < n; i++)
//         {
//             int tmp = a[i];
//             for(j = i - h; j >= 0 && a[j] > tmp; j -= h)
//                 a[j + h] = a[j];
//             a[j + h] = tmp;
//         }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("셀 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
//     shell(x, nx);
//     puts("오름차순으로 정렬했습니다.");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
//     free(x);
//     return 0;
// }

// Q12-1
// int shell(int a[], int n)
// {
//     int i, j, h;
//     int cnt = 0;
//     for(h = n / 2; h > 0; h /= 2)
//         for(i = h; i < n; i++)
//         {
//             int tmp = a[i];
//             for(j = i - h; j >= 0 && a[j] > tmp; j -= h)
//             {
//                 a[j + h] = a[j];
//                 cnt++;
//             }
//             a[j + h] = tmp;
//             cnt++;
//         }
//     return cnt;
// }

// int main(void)
// {
//     int i, nx;
//     int count;
//     int *x;
//     puts("셀 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
//     count = shell(x, nx);
//     puts("오름차순으로 정렬했습니다.");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
//     printf("이동 횟수 : %d", count);
//     free(x);
//     return 0;
// }

// Q12-2
// int shell(int a[], int n)
// {
//     int i, j, h;
//     int cnt = 0;

//     for(h = 1; h < n / 9; h = h * 3 + 1)
//         ;
//     for(; h > 0; h /= 3)
//         for(i = h; i < n; i++)
//         {
//             int tmp = a[i];
//             for(j = i - h; j >= 0 && a[j] > tmp; j -= h)
//             {
//                 a[j + h] = a[j];
//                 cnt++;
//             }
//             a[j + h] = tmp;
//             cnt++;            
//         }
//     return cnt;
// }

// int main(void)
// {
//     int i, nx;
//     int count;
//     int *x;
//     puts("셀 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
//     count = shell(x, nx);
//     puts("오름차순으로 정렬했습니다.");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
//     printf("이동 횟수 : %d", count);
//     free(x);
//     return 0;
// }

// 실습 6-8
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void partition(int a[], int n)
// {
//     int i;
//     int pl = 0;
//     int pr = n - 1;
//     int x = a[n / 2];
//     do
//     {
//         while(a[pl] < x) pl++;
//         while(a[pr] > x) pr--;
//         if(pl <= pr)
//         {
//             swap(int, a[pl], a[pr]);
//             pl++;
//             pr--;
//         }
//     } while (pl <= pr);
//     printf("피벗의 값은 %d\n", x);
//     printf("피벗 이하의 그룹\n");
//     for(i = 0; i <= pl - 1; i++)
//         printf("%d ", a[i]);
//     putchar('\n');

//     if(pl > pr + 1)
//     {
//         printf("피벗과 일치하는 그룹\n");
//         for(i = pr + 1; i <= pl - 1; i++)
//             printf("%d ", a[i]);
//         putchar('\n');
//     }

//     printf("피벗 이상의 그룹\n");
//     for(i = pr + 1; i < n; i++)
//         printf("%d ", a[i]);
//     putchar('\n');
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("배열을 나눕니다.");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
//     partition(x, nx);
//     free(x);
//     return 0;
// }

// 실습 6-9
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void quick(int a[], int left, int right)
// {
//     int pl = left;
//     int pr = right;
//     int x = a[(pl + pr) / 2];
//     do
//     {
//         while(a[pl] < x) pl++;
//         while(a[pr] > x) pr--;
//         if(pl <= pr)
//         {
//             swap(int, a[pl], a[pr]);
//             pl++;
//             pr--;
//         }
//     } while (pl <= pr);
//     if(left < pr) quick(a, left, pr);
//     if(pl < right) quick(a, pl, right);    
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("퀵 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     quick(x, 0, nx - 1);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q13
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void quick(int a[], int left, int right)
// {
//     int pl = left;
//     int pr = right;
//     int x = a[(pl + pr) / 2];
//     do
//     {
//         while(a[pl] < x) pl++;
//         while(a[pr] > x) pr--;
//         if(pl <= pr)
//         {
//             swap(int, a[pl], a[pr]);
//             pl++;
//             pr--;
//         }
//     } while (pl <= pr);
//     if(left < pr) quick(a, left, pr);
//     if(pl < right) quick(a, pl, right);    
// }

// void quick_sort(int a[], int n)
// {
//     quick(a, 0, n - 1);
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("퀵 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     quick_sort(x, nx);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// 실습 6C-1
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void quick(int a[], int left, int right)
// {
//     int pl = left;
//     int pr = right;
//     int x = a[(pl + pr) / 2];

//     int i;
//     printf("a[%d] ~ a[%d] : { ", left, right);
//     for(i = left; i < right; i++)
//         printf("%d, ", a[i]);
//     printf("%d }\n", a[right]);

//     do
//     {
//         while(a[pl] < x) pl++;
//         while(a[pr] > x) pr--;
//         if(pl <= pr)
//         {
//             swap(int, a[pl], a[pr]);
//             pl++;
//             pr--;
//         }
//     } while (pl <= pr);
    
//     if(left < pr) quick(a, left, pr);
//     if(pl < right) quick(a, pl, right);
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("퀵 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     quick(x, 0, nx - 1);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// 실습 6-10
// #include "IntStack.h"
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)
// void quick(int a[], int left, int right)
// {
//     IntStack lstack;
//     IntStack rstack;

//     Initialize(&lstack, right - left + 1);
//     Initialize(&rstack, right - left + 1);

//     Push(&lstack, left);
//     Push(&rstack, right);

//     while(!IsEmpty(&lstack))
//     {
//         int pl = (Pop(&lstack, &left), left);
//         int pr = (Pop(&rstack, &right), right);
//         int x = a[(left + right) / 2];
//         do
//         {
//             while(a[pl] < x) pl++;
//             while(a[pr] > x) pr--;
//             if(pl <= pr)
//             {
//                 swap(int, a[pl], a[pr]);
//                 pl++;
//                 pr--;
//             }
//         } while (pl <= pr);
        
//         if(left < pr)
//         {
//             Push(&lstack, left);
//             Push(&rstack, pr);
//         }
//         if(pl < right)
//         {
//             Push(&lstack, pl);
//             Push(&rstack, right);
//         }
//     }
//     Terminate(&lstack);
//     Terminate(&rstack);
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("퀵 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     quick(x, 0, nx - 1);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q14
// #include "IntStack.h"
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void quick(int a[], int left, int right)
// {
//     IntStack lstack;
//     IntStack rstack;

//     Initialize(&lstack, right - left + 1);
//     Initialize(&rstack, right - left + 1);

//     Push(&lstack, left);
//     Push(&rstack, right);

//     printf("a[%d] ~  a[%d]를 스택에 푸쉬합니다.\n", left, right);
//     printf("Lstack : "); Print(&lstack);
//     printf("Rstack : "); Print(&rstack);

//     while(!IsEmpty(&lstack))
//     {
//         int pl = (Pop(&lstack, &left), left);
//         int pr = (Pop(&rstack, &right), right);
//         int x = a[(left + right) / 2];

//         printf("=================================================\n");
//         printf("스택에서 꺼낸 배열의 범위는 a[%d] ~ a[%d]입니다.\n", left, right);
//         printf("=================================================\n");

//         do
//         {
//             while(a[pl] < x) pl++;
//             while(a[pr] > x) pr--;
//             if(pl <= pr)
//             {
//                 swap(int, a[pl], a[pr]);
//                 pl++;
//                 pr--;
//             }
//         } while (pl <= pr);
        
//         if(left < pr)
//         {
//             Push(&lstack, left);
//             Push(&rstack, pr);

//             printf("a[%d] ~ a[%d]를 스택에 푸쉬합니다.\n", left, pr);
//             printf("Lstack : "); Print(&lstack);
//             printf("Rstack : "); Print(&rstack);
//         }
//         if(pl < right)
//         {
//             Push(&lstack, pl);
//             Push(&rstack, right);

//             printf("a[%d] ~ a[%d]를 스택에 푸쉬합니다.\n", pl, right);
//             printf("Lstack : "); Print(&lstack);
//             printf("Rstack : "); Print(&rstack);
//         }
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     puts("퀵 정렬");
//     printf("요솟수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     quick(x, 0, nx - 1);
//     puts("오름차순 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q15-1
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void quick(int a[], int left, int right)
// {
//     int pl = left;
//     int pr = right;
//     int x = a[(pl + pr) / 2];
//     do
//     {
//         while(a[pl] < x) pl++;
//         while(a[pr] > x) pr--;
//         if(pl <= pr)
//         {
//             swap(int, a[pl], a[pr]);
//             pl++;
//             pr--;
//         }
//     } while (pl <= pr);

//     if(pr - left < right - pl)
//     {
//         swap(int, pl, left);
//         swap(int, pr, right);
//     }

//     if(left < pr) quick(a, left, pr);
//     if(pl < right) quick(a, pl, right);    
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     puts("퀵 정렬");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     quick(x, 0, nx - 1);
//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q15-2
// #include "IntStack.h"
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// void quick(int a[], int left, int right)
// {
//     IntStack lstack;
//     IntStack rstack;

//     Initialize(&lstack, right - left + 1);
//     Initialize(&rstack, right - left + 1);

//     Push(&lstack, left);
//     Push(&rstack, right);

//     while(!IsEmpty(&lstack))
//     {
//         int pl = (Pop(&lstack, &left), left);
//         int pr = (Pop(&rstack, &right), right);
//         int x = a[(left + right) / 2];

//         do
//         {
//             while(a[pl] < x) pl++;
//             while(a[pr] > x) pr--;
//             if(pl <= pr)
//             {
//                 swap(int, a[pl], a[pr]);
//                 pl++;
//                 pr--;
//             }
//         } while (pr <= pl);
        
//         if(pr - left < right -pl)
//         {
//             swap(int, pl, left);
//             swap(int, pr, right);
//         }
//         if(left < pr)
//         {
//             Push(&lstack, left);
//             Push(&rstack, pr);
//         }
//         if(pl < right)
//         {
//             Push(&lstack, pl);
//             Push(&rstack, right);
//         }
//     }
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     puts("퀵 정렬");
//     printf("요솟수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     quick(x, 0, nx - 1);
//     puts("오름차순 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);
    
//     free(x);
//     return 0;
// }

// Q16-1
// #define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

// /*--- 단순 삽입 정렬 ---*/
// void insertion(int a[], int n)
// {
// 	int i, j;

// 	for (i = 1; i < n; i++) {
// 		int tmp = a[i];
// 		for (j = i; j > 0 && a[j - 1] > tmp; j--)
// 			a[j] = a[j - 1];
// 		a[j] = tmp;
// 	}
// }

// /*--- 퀵 정렬 (요솟수가 9개 이하면 단순 삽입 정렬로 전환 : 재귀 버전) ---*/
// void quick(int a[], int left, int right)
// {
// 	if (right - left < 9)
// 		insertion(&a[left], right - left + 1);
// 	else {
// 		int pl = left;				
// 		int pr = right;				
// 		int x = a[(pl + pr) / 2];	

// 		do {
// 			while (a[pl] < x) pl++;
// 			while (a[pr] > x) pr--;
// 			if (pl <= pr) {
// 				swap(int, a[pl], a[pr]);
// 				pl++;
// 				pr--;
// 			}
// 		} while (pl <= pr);

// 		if (pr - left < right - pl) {
// 			swap(int, pl, left);
// 			swap(int, pr, right);
// 		}
// 		if (left < pr)  quick(a, left, pr);
// 		if (pl < right) quick(a, pl, right);
// 	}
// }

// int main(void)
// {
// 	int i, nx;
// 	int *x;		

// 	puts("퀵 정렬");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}

// 	quick(x, 0, nx - 1);

// 	puts("오름차순으로 정렬했습니다.");
// 	for (i = 0; i < nx; i++)
// 		printf("x[%d] = %d\n", i, x[i]);

// 	free(x);	

// 	return 0;
// }

// Q16-2
// #include "IntStack.h"

// #define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

// void insertion(int a[], int n)
// {
// 	int i, j;

// 	for (i = 1; i < n; i++) {
// 		int tmp = a[i];
// 		for (j = i; j > 0 && a[j - 1] > tmp; j--)
// 			a[j] = a[j - 1];
// 		a[j] = tmp;
// 	}
// }

// void quick(int a[], int left, int right)
// {
// 	IntStack lstack;		
// 	IntStack rstack;		

// 	Initialize(&lstack, right - left + 1);
// 	Initialize(&rstack, right - left + 1);

// 	Push(&lstack, left);
// 	Push(&rstack, right);

// 	while (!IsEmpty(&lstack)) {
// 		int pl = (Pop(&lstack, &left), left);		
// 		int pr = (Pop(&rstack, &right), right);		
// 		int x = a[(left + right) / 2];				

// 		if (right - left < 9)
// 			insertion(&a[left], right - left + 1);
// 		else {
// 			do {
// 				while (a[pl] < x) pl++;
// 				while (a[pr] > x) pr--;
// 				if (pl <= pr) {
// 					swap(int, a[pl], a[pr]);
// 					pl++;
// 					pr--;
// 				}
// 			} while (pl <= pr);

// 			if (pr - left < right - pl) {
// 				swap(int, pl, left);
// 				swap(int, pr, right);
// 			}
// 			if (left < pr) {
// 				Push(&lstack, left);
// 				Push(&rstack, pr);	
// 			}
// 			if (pl < right) {
// 				Push(&lstack, pl);	
// 				Push(&rstack, right);
// 			}
// 		}
// 	}
// }

// int main(void)
// {
// 	int i, nx;
// 	int *x;	

// 	puts("퀵 정렬");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}

// 	quick(x, 0, nx - 1);	

// 	puts("오름차순으로 정렬했습니다.");
// 	for (i = 0; i < nx; i++)
// 		printf("x[%d] = %d\n", i, x[i]);

// 	free(x);

// 	return 0;
// }

// Q17-1
// #define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

// int med3(int a, int b, int c)
// {
//     if(a >= b)
//         if(b >= c)
//             return b;
//         else if(a <= c)
//             return a;
//         else
//             return c;
//     else if(a > c)
//         return a;
//     else if(b > c)
//         return c;
//     else
//         return b;
// }

// void insertion(int a[], int n)
// {
//     int i, j;
//     for(i = 1; i < n; i++)
//     {
//         int tmp = a[i];
//         for(j = i; j > 0 && a[j - 1] > tmp; j--)
//             a[j] = a[j - 1];
//         a[j] = tmp;
//     }
// }

// void quick(int a[], int left, int right)
// {
//     if(right - left < 9)
//         insertion(&a[left], right - left + 1);
//     else
//     {
//         int pl = left;
//         int pr = right;
//         int x = med3(a[pl], a[(pl + pr) / 2], a[pr]);

//         do
//         {
//             while(a[pl] < x) pl++;
//             while(a[pr] > x) pr--;
//             if(pl <= pr)
//             {
//                 swap(int, a[pl], a[pr]);
//                 pl++;
//                 pr--;
//             }
//         } while (pl <= pr);
        
//         if(pr - left < right - pl)
//         {
//             swap(int, pl, left);
//             swap(int, pr, right);
//         }
//         if(left < pr) quick(a, left, pr);
//         if(pl < right) quick(a, pl, right);
//     }
// }

// int main(void)
// {
// 	int i, nx;
// 	int *x;	

// 	puts("퀵 정렬");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}

// 	quick(x, 0, nx - 1);

// 	puts("오름차순으로 정렬했습니다.");
// 	for (i = 0; i < nx; i++)
// 		printf("x[%d] = %d\n", i, x[i]);

// 	free(x);

// 	return 0;
// }

// Q17-2
// #include "IntStack.h"

// #define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

// int med3(int a, int b, int c)
// {
//     if(a >= b)
//         if(b >= c)
//             return b;
//         else if(a <= c)
//             return a;
//         else
//             return c;
//     else if(a > c)
//         return a;
//     else if(b > c)
//         return c;
//     else
//         return b;
// }

// void insertion(int a[], int n)
// {
// 	int i, j;

// 	for (i = 1; i < n; i++) {
// 		int tmp = a[i];
// 		for (j = i; j > 0 && a[j - 1] > tmp; j--)
// 			a[j] = a[j - 1];
// 		a[j] = tmp;
// 	}
// }

// void quick(int a[], int left, int right)
// {
// 	IntStack lstack;		
// 	IntStack rstack;		

// 	Initialize(&lstack, right - left + 1);
// 	Initialize(&rstack, right - left + 1);

// 	Push(&lstack, left);
// 	Push(&rstack, right);

// 	while (!IsEmpty(&lstack)) {
// 		int pl = (Pop(&lstack, &left), left);		
// 		int pr = (Pop(&rstack, &right), right);		
// 		int x = med3(a[pl], a[(pl + pr) / 2], a[pr]);			

// 		if (right - left < 9)
// 			insertion(&a[left], right - left + 1);
// 		else {
// 			do {
// 				while (a[pl] < x) pl++;
// 				while (a[pr] > x) pr--;
// 				if (pl <= pr) {
// 					swap(int, a[pl], a[pr]);
// 					pl++;
// 					pr--;
// 				}
// 			} while (pl <= pr);

// 			if (pr - left < right - pl) {
// 				swap(int, pl, left);
// 				swap(int, pr, right);
// 			}
// 			if (left < pr) {
// 				Push(&lstack, left);
// 				Push(&rstack, pr);	
// 			}
// 			if (pl < right) {
// 				Push(&lstack, pl);	
// 				Push(&rstack, right);
// 			}
// 		}
// 	}
// }

// int main(void)
// {
// 	int i, nx;
// 	int *x;	

// 	puts("퀵 정렬");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}

// 	quick(x, 0, nx - 1);	

// 	puts("오름차순으로 정렬했습니다.");
// 	for (i = 0; i < nx; i++)
// 		printf("x[%d] = %d\n", i, x[i]);

// 	free(x);

// 	return 0;
// }

// Q18-1
// #include "IntStack.h"
// #define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// int sort3elem(int x[], int a, int b, int c)
// {
//     if(x[b] < x[a]) swap(int, x[b], x[a]);
//     if(x[c] < x[b]) swap(int, x[c], x[b]);
//     if(x[b] < x[a]) swap(int, x[b], x[a]);
//     return b;
// }

// void insertion(int a[], int n)
// {
// 	int i, j;

// 	for (i = 1; i < n; i++) {
// 		int tmp = a[i];
// 		for (j = i; j > 0 && a[j - 1] > tmp; j--)
// 			a[j] = a[j - 1];
// 		a[j] = tmp;
// 	}
// }

// void quick(int a[], int left, int right)
// {
// 	if (right - left < 9)
// 		insertion(&a[left], right - left + 1);
// 	else {
// 		int pl = left;
// 		int pr = right;
// 		int x;
// 		int m = sort3elem(a, pl, (pl + pr) / 2, pr);
// 		x = a[m];
// 		swap(int, a[m], a[right - 1]);
// 		pl++;
// 		pr -= 2;

// 		do {
// 			while (a[pl] < x) pl++;
// 			while (a[pr] > x) pr--;
// 			if (pl <= pr) {
// 				swap(int, a[pl], a[pr]);
// 				pl++;
// 				pr--;
// 			}
// 		} while (pl <= pr);

// 		if (pr - left < right - pl) {
// 			swap(int, pl, left);
// 			swap(int, pr, right);
// 		}
// 		if (left < pr)  quick(a, left, pr);
// 		if (pl < right) quick(a, pl, right);
// 	}
// }

// int main(void)
// {
// 	int i, nx;
// 	int *x;		

// 	puts("퀵 정렬");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}

// 	quick(x, 0, nx - 1);

// 	puts("오름차순으로 정렬했습니다.");
// 	for (i = 0; i < nx; i++)
// 		printf("x[%d] = %d\n", i, x[i]);

// 	free(x);	

// 	return 0;
// }

// Q18-2
// #include "IntStack.h"

// #define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

// int sort3elem(int x[], int a, int b, int c)
// {
// 	if (x[b] < x[a]) swap(int, x[b], x[a]);
// 	if (x[c] < x[b]) swap(int, x[c], x[b]);
// 	if (x[b] < x[a]) swap(int, x[b], x[a]);
// 	return b;
// }

// void insertion(int a[], int n)
// {
// 	int i, j;

// 	for (i = 1; i < n; i++) {
// 		int tmp = a[i];
// 		for (j = i; j > 0 && a[j - 1] > tmp; j--)
// 			a[j] = a[j - 1];
// 		a[j] = tmp;
// 	}
// }

// void quick(int a[], int left, int right)
// {
// 	IntStack lstack;		
// 	IntStack rstack;		

// 	Initialize(&lstack, right - left + 1);
// 	Initialize(&rstack, right - left + 1);

// 	Push(&lstack, left);
// 	Push(&rstack, right);

// 	while (!IsEmpty(&lstack)) {
// 		int pl = (Pop(&lstack, &left), left);		
// 		int pr = (Pop(&rstack, &right), right);		
// 		int x;										

// 		if (right - left < 9)
// 			insertion(&a[left], right - left + 1);
// 		else {
// 			int m = sort3elem(a, pl, (pl + pr) / 2, pr);
// 			x = a[m];
// 			swap(int, a[m], a[right - 1]);
// 			pl++;
// 			pr -= 2;

// 			do {
// 				while (a[pl] < x) pl++;
// 				while (a[pr] > x) pr--;
// 				if (pl <= pr) {
// 					swap(int, a[pl], a[pr]);
// 					pl++;
// 					pr--;
// 				}
// 			} while (pl <= pr);

// 			if (pr - left < right - pl) {
// 				swap(int, pl, left);
// 				swap(int, pr, right);
// 			}
// 			if (left < pr) {
// 				Push(&lstack, left);	
// 				Push(&rstack, pr);		
// 			}
// 			if (pl < right) {
// 				Push(&lstack, pl);		
// 				Push(&rstack, right);	
// 			}
// 		}
// 	}
// }

// int main(void)
// {
// 	int i, nx;
// 	int *x;		

// 	puts("퀵 정렬");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}

// 	quick(x, 0, nx - 1);

// 	puts("오름차순으로 정렬했습니다.");
// 	for (i = 0; i < nx; i++)
// 		printf("x[%d] = %d\n", i, x[i]);

// 	free(x);	

// 	return 0;
// }

// 실습 6-11
// int int_cmp(const int *a, const int *b)
// {
//     if(*a < *b)
//         return -1;
//     else if(*a > *b)
//         return 1;
//     else
//         return 0;
// }

// int main(void)
// {
//     int i, nx;
//     int *x;
//     printf("qsort에 의한 정렬\n");
//     printf("요소 개수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }
//     qsort(x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmp);
//     puts("오름차순으로 정렬했습니다.");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] = %d\n", i, x[i]);
//     free(x);
//     return 0;
// }

// 실습 6-12
// typedef struct
// {
//     char name[10];
//     int height;
//     int weight;
// } Person;

// int npcmp(const Person *x, const Person *y)
// {
//     return strcmp(x->name, y->name);
// }
// int hpcmp(const Person *x, const Person *y)
// {
//     return x->height < y->height ? -1 : x->height > y->height ? 1 : 0;
// }

// int wpcmp(const Person *x, const Person *y)
// {
//     return x->weight < y->weight ? 1 : x->weight > y->weight ? -1 : 0;
// }

// void print_person(const Person x[], int no)
// {
//     int i;
//     for(i = 0; i < no; i++)
//         printf("%-10s %dcm %dkg\n", x[i].name, x[i].height, x[i].weight);
// }

// int main(void)
// {
//     Person x[] = {
//         {"sunmi", 170, 52},
//         {"yoobin", 180, 70},
//         {"sohee", 172, 63},
//         {"jina", 165, 50}
//     };

//     int nx = sizeof(x) / sizeof(x[0]);

//     puts("정렬 전");
//     print_person(x, nx);

//     /* 이름 오름차순 정렬 */
//     qsort(x, nx, sizeof(Person), (int(*)(const void *, const void *)) npcmp);
//     puts("\n이름 오름차순 정렬 후");
//     print_person(x, nx);

//     /* 키 오름차순 정렬 */
//     qsort(x, nx, sizeof(Person), (int(*)(const void *, const void *)) hpcmp);
//     puts("\n키 오름차순 정렬 후");
//     print_person(x, nx);

//     /* 몸무게 오름차순 정렬 */
//     qsort(x, nx, sizeof(Person), (int(*)(const void *, const void *)) wpcmp);
//     puts("\n몸무게 내림차순 정렬 후");
//     print_person(x, nx);

//     return 0;
// }

// Q19
// void sort_2dstr(char *p, int n1, int n2)
// {
//     qsort(p, n1, n2, (int(*)(const void *, const void *)) strcmp);
// }

// static int pstrcmp(const void *x, const void *y)
// {
//     return strcmp(*(const char **)x, *(const char **)y);
// }

// void sort_pvstr(char *p[], int n)
// {
//     qsort(p, n, sizeof(char *), pstrcmp);
// }

// int main(void)
// {
//     int i;
//     char a[][7] = {"LISP", "C", "Ada", "Pascal"};
//     char *p[] = {"LISP", "C", "Ada", "Pascal"};

//     sort_2dstr(&a[0][0], 4, 7);

//     sort_pvstr(p, 4);

//     puts("오름차순으로 정렬했습니다.");

//     for(i = 0; i < 4; i++)
//         printf("a[%d] = %s\n", i, a[i]);

//     for(i = 0; i < 4; i++)
//         printf("p[%d] = %s\n", i, a[i]);

//     return 0;
// }

// Q20
// static void memswap(void *x, void *y, size_t n)
// {
//     unsigned char *a = (unsigned char *)x;
//     unsigned char *b = (unsigned char *)y;

//     for(; n--; a++, b++)
//     {
//         unsigned char c = *a;
//         *a = *b;
//         *b = c;
//     }
// }

// void q_sort(void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *))
// {
//     if(nmemb > 0)
//     {
//         size_t pl = 0;                      /* 왼쪽 커서 */
//         size_t pr = nmemb - 1;              /* 오른쪽 커서 */
//         size_t pv = nmemb;                  /* 피벗 */
//         size_t pt = (pl + pr) / 2;          /* 피벗 업데이트 */
//         char *v = (char *)base;             /* 첫 번째 요소에 대한 포인터 */
//         char *x;                            /* 피벗에 대한 포인터 */

//         do
//         {
//             if(pv != pt) x = &v[(pv = pt) * size];
//             while(compar((const void *)&v[pl * size], x) < 0) pl++;
//             while(compar((const void *)&v[pr * size], x) > 0) pr--;
//             if(pl <= pr)
//             {
//                 pt = (pl == pv) ? pr : (pr == pv) ? pl : pv;
//                 memswap(&v[pl * size], &v[pr * size], size);
//                 pl++;
//                 if(pr == 0)
//                     goto QuickRight;
//                 pr--;
//             }
//         } while (pl <= pr);
        
//         if(0 < pr) q_sort(&v[0], pr + 1, size, compar);
//     QuickRight:
//         if(pl < nmemb - 1) q_sort(&v[pl * size], nmemb - pl, size, compar);
//     }
// }

// int int_cmp(const int *a, const int *b)
// {
//     return *a < *b ? -1 : *a > *b ? 1 : 0;
// }

// int main(void)
// {
//     int i, nx;
//     int *x;

//     printf("q_sort 함수로 정렬합니다.\n");
//     printf("요솟수 : ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     for(i = 0; i < nx; i++)
//     {
//         printf("x[%d] : ", i);
//         scanf("%d", &x[i]);
//     }

//     q_sort(x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmp);

//     puts("오름차순으로 정렬");
//     for(i = 0; i < nx; i++)
//         printf("x[%d] : %d\n", i, x[i]);

//     free(x);
//     return 0;
// }

// 실습 6-13
// void merge(const int a[], int na, const int b[], int nb, int c[])
// {
//     int pa = 0;
//     int pb = 0;
//     int pc = 0;
//     while(pa < na && pb < nb)
//         c[pc++] = (a[pa] <= b[pb]) ? a[pa++] : b[pb++];
//     while(pa < na)
//         c[pc++] = a[pa++];
//     while(pb < nb)
//         c[pc++] = b[pb++];
// }

// int main(void)
// {
//     int i, na, nb;
//     int *a, *b, *c;
//     printf("a의 요소 개수 : "); scanf("%d", &na);
//     printf("b의 요소 개수 : "); scanf("%d", &nb);
//     a = calloc(na, sizeof(int));
//     b = calloc(nb, sizeof(int));
//     c = calloc(na + nb, sizeof(int));

//     printf("a[0] : ");
//     scanf("%d", &a[0]);
//     for(i = 1; i < na; i++)
//     {
//         do
//         {
//             printf("a[%d] : ", i);
//             scanf("%d", &a[i]);
//         } while (a[i] < a[i - 1]);
//     }

//     printf("b[0] : ");
//     scanf("%d", &b[0]);
//     for(i = 1; i < nb; i++)
//     {
//         do
//         {
//             printf("b[%d] : ", i);
//             scanf("%d", &b[i]);
//         } while (b[i] < b[i - 1]);
//     }

//     merge(a, na, b, nb, c);
//     puts("배열 a와 b를 병합하여 배열 c에 저장했습니다.");
//     for(i = 0; i < na + nb; i++)
//         printf("c[%d] = %d\n", i, c[i]);
    
//     free(a); free(b); free(c);
//     return 0;
// }

// 실습 6-14
static int *buff;       /* 작업용 배열 */

static void __mergesort(int a[], int left, int right)
{
    if(left < right)
    {
        int center = (left + right) / 2;
        int p = 0;
        int i;
        int j = 0;
        int k = left;
        __mergesort(a, left, center);
        __mergesort(a, center + 1, right);

        for(i = left; i <= center; i++)
            buff[p++] = a[i];
        while(i <= right && j < p)
            a[k++] = (buff[j] <= a[i]) ? buff[j++] : a[i++];
        while(j < p)
            a[k++] = buff[j++];
    }
}

int mergesort(int a[], int n)
{
    if((buff = calloc(n, sizeof(int))) == NULL)
        return -1;
    __mergesort(a, 0, n - 1);
    free(buff);
    return 0;  
}

int main(void)
{
    int i, nx;
    int *x;
    puts("병합 정렬");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for(i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    mergesort(x, nx);
    puts("오름차순 정렬");
    for(i = 0; i < nx; i++)
        printf("x[%d] : %d\n", i, x[i]);
    
    free(x);
    return 0;
}
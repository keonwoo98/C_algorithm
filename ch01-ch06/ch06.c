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
int int_cmp(const int *a, const int *b)
{
    if(*a < *b)
        return -1;
    else if(*a > *b)
        return 1;
    else
        return 0;
}

int main(void)
{
    int i, nx;
    int *x;
    printf("qsort에 의한 정렬\n");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for(i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }
    qsort(x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmp);
    puts("오름차순으로 정렬했습니다.");
    for(i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    free(x);
    return 0;
}
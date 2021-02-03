#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Q1
// int search(int a[], int n, int key)
// {
//     int i=0;
//     a[n]=key;
//     for(i=0; i<=n; i++)
//     {
//         if(a[i]==key)
//             break;
//     }
//     return i==n ? -1 : i;
// }

// int main(void)
// {
//     int n;
//     int key;
//     int idx;
//     printf("배열의 길이: ");
//     scanf("%d", &n);
//     int *x = calloc(n+1, sizeof(int));

//     for(int i=0; i<n; i++)
//     {
//         printf("x[%d]: ", i);
//         scanf("%d", &x[i]);
//     }

//     printf("찾으려는 배열의 요소: ");
//     scanf("%d", &key);
//     idx = search(x, n, key);
//     if(idx == -1)
//         puts("search fail!");
//     else
//         printf("%d는 x[%d]\n", key, idx);
//     free(x);
//     return 0;
// }

// Q2
// int search(const int a[], int n, int key)
// {
// 	int i;

// 	printf("   |");
// 	for (i = 0; i < n; i++)
// 		printf("%3d", i);
// 	printf("\n---+");
// 	for (i = 0; i < n; i++)
// 		printf("---");
// 	printf("-\n");

// 	for (i = 0; i < n; i++) {
// 		int j;
// 		printf("   |");
// 		printf("%*s", 3 * (i - 1) + 5, "");
// 		printf("*\n");
// 		printf("%3d|", i);
// 		for (j = 0; j < n; j++)
// 			printf("%3d", a[j]);
// 		putchar('\n');

// 		if (a[i] == key)
// 			return i; /* 검색 성공 */

// 		printf("   |\n");
// 	}

// 	return -1; /* 검색 실패 */
// }

// int main(void)
// {
//     int n;
//     int key;
//     printf("배열의 길이: ");
//     scanf("%d", &n);
//     int *x = calloc(n+1, sizeof(int));

//     for(int i=0; i<n; i++)
//     {
//         printf("x[%d]: ", i);
//         scanf("%d", &x[i]);
//     }

//     printf("찾으려는 배열의 요소: ");
//     scanf("%d", &key);
// 	    int idx = search(x, n, key);	/* 배열 x에서 값이 ky 인 요소를 선형 검색 */

// 	   if (idx == -1)
// 		    puts("검색에 실패했습니다.");
// 	   else
// 		    printf("%d는 x[%d]에 있습니다.\n", key, idx);
//     free(x);
//     return 0;
// }

// 실습 3-4
// int bin_search(const int a[], int n, int key)
// {
//     int pl = 0;
//     int pr = n-1;
//     int pc;
//     do
//     {
//         pc = (pl+pr) / 2;
//         if(a[pc] == key)
//             return pc;
//         else if(a[pc] < key)
//             pl = pc + 1;
//         else
//             pr = pc - 1;
//     } while (pl <= pr);
//     return -1;
    
// }

// int main(void)
// {
//     int i, nx, ky, idx;
//     int *x;
//     puts("이진 검색");
//     printf("요소 개수: ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));
//     printf("오름차운으로 입력하세요.\n");
//     printf("x[0]: ");
//     scanf("%d", &x[0]);
//     for(i=1; i<nx; i++)
//     {
//         do
//         {
//             printf("x[%d]: ", i);
//             scanf("%d", &x[i]);
//         } while(x[i] < x[i-1]);
//     }
//     printf("검색값: ");
//     scanf("%d", &ky);
//     idx = bin_search(x, nx, ky);
//     if(idx == -1)
//         puts("검색에 실패했습니다.");
//     else
//         printf("%d는(은) x[%d]에 있습니다\n", ky, idx);
//     free(x);
//     return 0;
// }

// Q3
// void search_idx(const int a[], int n, int key, int idx[])
// {
//     int j = 0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i] == key)
//         {
//             idx[j] = i;
//             j++;
//         }
//     }
//     if(j == 0)
//         puts("검색 실패");
//     else
//     {
//         for(int i=0; i<j; i++)
//             printf("idx[%d]: %d\n", i, idx[i]);
//         printf("key값 개수: %d", j);
//     }
// }

// int main(void)
// {
//     int i, n, key;
//     int *a;
//     int *idx;

//     printf("요소 개수: ");
//     scanf("%d", &n);
//     a = calloc(n, sizeof(int));
//     idx = calloc(n, sizeof(int));
//     for(i=0; i<n; i++)
//     {
//         printf("a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
//     printf("검색값: ");
//     scanf("%d", &key);
//     search_idx(a, n, key, idx);
//     free(a);
//     free(idx);
//     return 0;
// }


// Q3
// int search_idx(const int a[], int n, int key, int idx[])
// {
// 	int i, count = 0;

// 	for (i = 0; i < n; i++)
// 		if (a[i] == key)
// 			idx[count++] = i;
// 	return count;
// }

// int main(void)
// {
// 	int i, nx, ky;
// 	int no;		/* ky과 일치하는 요소의 개수 */
// 	int *x;		/* 데이터를 저장하는 배열 */
// 	int *idx;	/* ky와 일치하는 요소의 인덱스를 저장하는 배열 */

// 	puts("선형 검색");
// 	printf("요솟수 : ");
// 	scanf("%d", &nx);
// 	x = calloc(nx, sizeof(int));	/* 요솟수 nx인 int 형 배열을 생성 */
// 	idx = calloc(nx, sizeof(int));	/* 요솟수 nx인 int 형 배열을 생성 */

// 	for (i = 0; i < nx; i++) {
// 		printf("x[%d] : ", i);
// 		scanf("%d", &x[i]);
// 	}
// 	printf("검색 값 :");
// 	scanf("%d", &ky);

// 	no = search_idx(x, nx, ky, idx);	/* 배열 x에서 값이 ky 인 요소를 선형 검색 */

// 	if (no == -1)
// 		puts("일치하는 요소는 존재하지 않습니다.");
// 	else {
// 		printf("일치하는 요소는 %d 개입니다.\n", no);
// 		for (i = 0; i < no; i++)
// 			printf("x[%d] ", idx[i]);
// 		putchar('\n');
// 	}

// 	free(x);	/* 배열을 해제 */
// 	free(idx);	/* 배열을 해제 */

// 	return 0;
// }

// Q4
// int search(const int a[], int n, int key)
// {
//     int i;
//     int pl = 0;
//     int pr = n - 1;
//     int pc;

//     printf("   |");
//     for(i = 0; i < n; i++)
//         printf("%4d", i);
//     printf("\n---+");
//     for(i = 0; i < n; i++)
//         printf("----");
//     printf("--\n");

//     do
//     {
//         pc = (pl + pr) / 2;

//         printf("   |");
//         for(i = 0; i < 4 * pl; i++)
//             printf(" ");
//         printf(" <-");
//         for(i = 0; i < 4 * (pc - pl); i++)
//             printf(" ");
//         printf("+");
//         for(i = 0; i < 4 * (pr - pc); i++)
//             printf(" ");
//         printf("->\n");
        
//         printf("%3d|", pc);
//         for(i = 0; i < n; i++)
//             printf("%4d", a[i]);
//         putchar('\n');

//         if(a[pc] == key)
//             return pc;
//         else if(a[pc] < key)
//             pl = pc + 1;
//         else
//             pr = pc - 1;
//     } while (pl <= pr);

//     return -1;
// }

// int main(void)
// {
//     int n;
//     int key;
//     int idx;
//     printf("배열의 길이: ");
//     scanf("%d", &n);
//     int *x = calloc(n, sizeof(int));

//     for(int i = 0; i < n; i++)
//     {
//         printf("x[%d]: ", i);
//         scanf("%d", &x[i]);
//     }
//     printf("key: ");
//     scanf("%d", &key);

//     idx = search(x, n, key);
//     if(idx == -1)
//         puts("fail!");
//     else
//         printf("%d는 x[%d]에 있습니다\n", key, idx);
    
//     free(x);
//     return 0;
// }

// Q5
// int bin_search(const int a[], int n, int key)
// {
//     int pl = 0;
//     int pr = n - 1;
//     int pc;

//     do
//     {
//         pc = (pl + pr) / 2;
//         if(a[pc] == key)
//         {
//             while(pc > pl && a[pc - 1] == key)
//                 pc--;
//             return pc;
//         }
//         else if(a[pc] < key)
//             pl = pc +1;
//         else
//             pr = pc - 1;
//     } while (pl <= pr);
//     return -1;
// }

// int main(void)
// {
//     int i, n, key, idx;
//     printf("요소 개수: ");
//     scanf("%d", &n);
//     int *x = calloc(n, sizeof(int));

//     for(i = 0; i < n; i++)
//     {
//         printf("x[%d]: ", i);
//         scanf("%d", &x[i]);
//     }

//     printf("검색할 요소: ");
//     scanf("%d", &key);
//     idx = bin_search(x, n, key);

//     if(idx == -1)
//         puts("search fail!");
//     else
//         printf("%d는 x[%d]에 있습니다.", key, idx);
//     free(x);
//     return 0;
// }

// 실습 3-5
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
//     int i, nx, ky;
//     int *x;
//     int *p;
//     puts("bsearch 함수를 사용하여 검색");
//     printf("요소 개수: ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(int));

//     printf("오름차순으로 입력하세요.\n");
//     printf("x[0]: ");
//     scanf("%d", &x[0]);
//     for(i = 1; i < nx; i++)
//     {
//         do
//         {
//             printf("x[%d]: ", i);
//             scanf("%d", &x[i]);
//         } while (x[i] < x[i - 1]);
//     }
//     printf("검색값: ");
//     scanf("%d", &ky);

//     p = bsearch(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *)) int_cmp);
//     if(p == NULL)
//         puts("검색에 실패했습니다.");
//     else
//         printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));
//     free(x);
//     return 0;
// }

// 실습 3C-1
// int sum(int x1, int x2)
// {
//     return x1 + x2;
// }

// int mul(int x1, int x2)
// {
//     return x1 * x2;
// }

// void kuku(int(*calc)(int, int))
// {
//     int i, j;
//     for(i = 1; i <= 9; i++)
//     {
//         for(j = 1; j <= 9; j++)
//             printf("%3d", (*calc)(i, j));
//         putchar('\n');
//     }
// }

// int main(void)
// {
//     puts("덧셈표");
//     kuku(sum);
//     puts("\n곱셈표");
//     kuku(mul);

//     return 0;
// }

// 실습 3-7
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

// int main(void)
// {
//     Person x[] = {
//         {"김영준", 179, 79},
//         {"박현규", 172, 63},
//         {"이수진", 176, 52},
//         {"최윤미", 165, 51},
//         {"함진아", 181, 73},
//         {"홍연의", 172, 84},
//     };
//     int nx = sizeof(x) / sizeof(x[0]);
//     int retry;
//     puts("이름으로 검색");
//     do
//     {
//         Person temp, *p;
//         printf("이름: ");
//         scanf("%s", temp.name);
//         p = bsearch(&temp, x, nx, sizeof(Person), (int(*)(const void *, const void *))npcmp);
//         if(p == NULL)
//             puts("검색에 실패하였습니다.");
//         else
//         {
//             puts("검색 성공! 아래 요소를 찾았습니다.");
//             printf("x[%d]: %s %dcm %dkg\n", (int)(p - x), p->name, p->height, p->weight);
//         }
//         printf("다시 검색할까요? (1) 예 / (0) 아니오 : ");
//         scanf("%d", &retry);
//     } while (retry == 1);
//     return 0;
// }

// Q6
// int long_cmpr(const long *a, const long *b)
// {
//     if(*a < *b)
//         return 1;
//     else if(*a > *b)
//         return -1;
//     else
//         return 0;
// }

// int main(void)
// {
//     int i, nx;
//     long ky;
//     long *x;
//     long *p;
//     puts("bsearch 함수를 사용하여 검색");
//     printf("요소 개수: ");
//     scanf("%d", &nx);
//     x = calloc(nx, sizeof(long));
//     puts("내림차순으로 입력");
//     printf("x[0]: ");
//     scanf("%ld", &x[0]);

//     for(i = 1; i < nx; i++)
//     {
//         do
//         {
//             printf("x[%d]: ", i);
//             scanf("%ld", &x[i]);
//         } while (x[i] > x[i - 1]);
//     }
//     printf("검색값: ");
//     scanf("%ld", &ky);

//     p = bsearch(&ky, x, nx, sizeof(long), (int(*)(const void *, const void *))long_cmpr);

//     if(p == NULL)
//         puts("검색 실패!");
//     else
//         printf("%ld는 x[%d]에 있습니다.\n", ky, (int)(p - x));
    
//     free(x);
//     return 0;
// }

// Q7
int compare(const int *a, const int *b)
{
    if(*a < *b)
        return -1;
    else if(*a > *b)
        return 1;
    else
        return 0;
}
void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size, int(*compare)(const void*, const void*))
{
    size_t i;
    char *x = (char *)base;
    for(i = 0; i < nmemb; i++)
        if(!compare((const void *)&x[i * size], key))
            return (&x[i * size]);
    return NULL;		
}

int main(void)
{
	int i, nx, ky;
	int *x;		/* 배열의 첫 번째 요소에 대한 포인터 */
	int *p;		/* 검색된 요소에 대한 포인터 */

	puts("seqsearch 함수를 사용하여 검색");
	printf("요솟수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	/* 요솟수 nx인 int형 배열을 생성 */

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("검색 값 : ");
	scanf("%d", &ky);

	p = seqsearch(&ky,								/* 검색 값에 대한 포인터 */
		x,											/* 배열 */
		nx,											/* 요솟수 */
		sizeof(int),								/* 요소의 크기 */
		(int(*)(const void *, const void *))compare	/* 비교 함수 */
	);

	if (p == NULL)
		puts("검색에 실패했습니다.");
	else
		printf("%d는 x[%d]에 있습니다.\n", ky, (int)(p - x));

	free(x);

	return 0;
}

// bsearch 실습
// int compare(const void *a, const void *b)
// {
//     if(*(int *)a < *(int *)b)
//         return -1;
//     else if(*(int *)a > *(int *)b)
//         return 1;
//     else
//         return 0;
// }

// int main(void)
// {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//     int size = sizeof(arr) / sizeof(int);
//     int key;
//     int *p;

//     key = 50;
//     p = bsearch(&key, arr, size, sizeof(int), compare);

//     if(p == NULL)
//         puts("search fail!");
//     else
//         printf("%d는 arr[%d]에 있습니다.\n", key, (int)(p - arr));

//     return 0;
// }
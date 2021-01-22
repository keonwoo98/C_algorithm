#include <stdio.h>
#include <stdlib.h>

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
//     return i==key ? -1 : i;
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
//     printf("%d는 x[%d]\n", key, search(x, n, key));
//     free(x);
//     return 0;
// }

// Q2
int search(const int a[], int n, int key)
{
	int i;

	printf("   |");
	for (i = 0; i < n; i++)
		printf("%3d", i);
	printf("\n---+");
	for (i = 0; i < n; i++)
		printf("---");
	printf("-\n");

	for (i = 0; i < n; i++) {
		int j;
		printf("   |");
		printf("%*s", 3 * (i - 1) + 5, "");
		printf("*\n");
		printf("%3d|", i);
		for (j = 0; j < n; j++)
			printf("%3d", a[j]);
		putchar('\n');

		if (a[i] == key)
			return i; /* 검색 성공 */

		printf("   |\n");
	}

	return -1; /* 검색 실패 */
}

int main(void)
{
    int n;
    int key;
    printf("배열의 길이: ");
    scanf("%d", &n);
    int *x = calloc(n+1, sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("찾으려는 배열의 요소: ");
    scanf("%d", &key);
	int idx = search(x, n, key);	/* 배열 x에서 값이 ky 인 요소를 선형 검색 */

	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d는 x[%d]에 있습니다.\n", key, idx);
    free(x);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int	search(int a[], int n, int key)
{
	int	i;

	printf("   |");
	for (i = 0; i < n; i++)
		printf("%3d", i);
	printf("\n---+");
	for (i = 0; i < n; i++)
		printf("---");
	printf("-\n");

	for (i = 0; i < n; i++)
	{
		int j;
		printf("   |");
		printf("%*s", 3 * (i - 1) + 5, "");
		printf("*\n");
		printf("%3d|", i);
		for (j = 0; j < n; j++)
			printf("%3d", a[j]);
		putchar('\n');

		if (a[i] == key)
			return i;

		printf("   |\n");
	}

	return -1;
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;						/* 배열의 첫 번째 요소에 대한 포인터 */

	puts("선형 검색");
	printf("요솟수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); /* 요솟수 nx인 int 형 배열을 생성 */

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("검색 값 : ");
	scanf("%d", &ky);

	idx = search(x, nx, ky);	/* 배열 x에서 값이 ky 인 요소를 선형 검색 */

	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d는 x[%d]에 있습니다.\n", ky, idx);

	free(x);

	return 0;
}
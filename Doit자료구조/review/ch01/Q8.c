#include <stdio.h>

int	main(void)
{
	int	n;
	int	sum;

	puts("1부터 n까지의 합을 구합니다.");

	printf("n의 값 : ");
	scanf("%d", &n);

	sum = (n + 1) * (n / 2) + (n % 2 == 1 ? (n + 1) / 2 : 0);

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}

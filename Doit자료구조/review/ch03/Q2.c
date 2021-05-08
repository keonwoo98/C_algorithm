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

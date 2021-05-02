
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

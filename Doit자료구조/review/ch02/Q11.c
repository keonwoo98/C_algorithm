#include <stdio.h>

int	mdays[][12] = {
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

int	isleap(int year)
{
	return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int	dayofyear(int y, int m, int d)
{
	while (--m)
		d += mdays[isleap(y)][m - 1];
	return d;
}

int	main(void)
{
	int	year, month, day;
	int	retry;

	do {
		printf("year : "); scanf("%d", &year);
		printf("month : "); scanf("%d", &month);
		printf("day : "); scanf("%d", &day);

		printf("%d 일째\n", dayofyear(year, month, day));
		printf("retry? (1 Yes / 0 No) : ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}

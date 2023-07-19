#include <stdio.h>
/**
 * main - lists all the multiples of 3 or 5 below 1024(excluded)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

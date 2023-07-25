#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: array name
 * @n: number of elents in the array
 * Return: a & n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

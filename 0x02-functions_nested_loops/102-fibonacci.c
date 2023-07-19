#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers starting from 1 and 2
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int count;
	unsigned long fi1 = 0, fi2 = 1, sum;


	for (count = 0; count < 50; count++)
	{
		sum = fi1 + fi2;
		printf("%lu", sum);
		fi1 = fi2;
		fi2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

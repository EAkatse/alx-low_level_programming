#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers starting from 1 and 2
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int n = 50;
	unsigned long long int fib1 = 1, fib2 = 2, fib_next;

	printf("%llu, %llu, ", fib1, fib2);
	for (int i = 2; i < n; i++)
	{
		fib_next = fib1 + fib2;
		printf("%llu", fib_next);

		if (i < n - 1)
		{
			printf(", ");
		}

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");
	return (0);
}

#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of its parameters
 * ...: the variable aruguments to be printed
 * @n: the number of sum of integers to be printed
 * Return: add (function)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int add = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(ptr, int);
	}
	va_end(ptr);
	return (add);
}

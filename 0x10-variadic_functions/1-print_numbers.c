#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string to be printed between numbers (or NULL if none).
 * @n: The number of integers to be printed.
 * @...: The variable arguments (integers) to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}

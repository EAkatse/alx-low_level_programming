#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print a variable number of strings with a separator.
 * @separator: The string to be printed between strings (or NULL if none).
 * @n: The number of strings to be printed.
 * @...: The variable arguments (strings) to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	const char *current_string;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		current_string = va_arg(ptr, const char *);

		if (current_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_string);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}

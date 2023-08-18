#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Print a variable number of arguments based on the format.
 * @format: The format string indicating the types of arguments.
 * @...: The variable arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char current_format;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		if (current_format == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (current_format == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (current_format == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (current_format == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", separator, str);
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

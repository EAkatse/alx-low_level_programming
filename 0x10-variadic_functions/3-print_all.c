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
	int i;
	int index = 0;
	char c;
	float f;
	char *s;

	va_start(args, format);
	while (format && format[index])
	{
		if (i > 0 && format[index - 1] != 's')
			printf(", ");
		switch (format[index])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", c);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		index++;
	}
	va_end(args);
	printf("\n");
}

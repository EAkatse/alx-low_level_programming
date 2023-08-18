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
	unsigned int x = 0, y, c = 0;
	char *str;
	const char dawg[] = "cifs";

	va_start(args, format);
	while (format && format[x])
	{
		y = 0;
		while (dawg[y])
		{
			if (format[x] == dawg[y] && c)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(args, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), c = 1;
			break;
		case 's':
			str = va_arg(args, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} x++;
	}
	printf("\n"), va_end(args);
}

#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	puchar('\n');
}

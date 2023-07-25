#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = (length - 1) / 2 + 1;
	while (str[start_index] != '\0')
	{
		putchar(str[start_index]);
		start_index++;
	}
	putchar('\n');
}

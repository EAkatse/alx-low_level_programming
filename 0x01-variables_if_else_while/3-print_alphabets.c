#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabets in lowercase & uppercase
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}
	putchar('\n');
	return (0);
}

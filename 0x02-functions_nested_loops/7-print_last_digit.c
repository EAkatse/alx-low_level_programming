#include "main.h"
/**
 * print_last_digit - printsthe last digit of a number
 * @n: the int to extract the last digit form
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}

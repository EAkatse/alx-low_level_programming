#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: the base case
 * Return: returns the factorial of a given number to the factorial fucntion
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raisedd to the power y
 * @x: the base number
 * @y: the exponent number
 * Return: the exponent of a number(x) raised to the power(y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

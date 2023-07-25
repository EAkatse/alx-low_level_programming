#include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: nothing
 */
void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

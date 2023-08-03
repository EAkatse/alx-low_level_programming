#include "main.h"
/**
 * _memset - occupy a memory block with a specific value
 * @s: starting address of memory to be occupied
 * @b: the value desired
 * @n: number of bytes to be changed
 * Return: changed array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}


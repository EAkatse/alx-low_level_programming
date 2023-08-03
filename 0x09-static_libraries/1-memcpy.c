#include "main.h"
/**
 * _memcpy - copies a memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number (bytes)
 * Return: the copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int i = n;

	for (; b < i; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}

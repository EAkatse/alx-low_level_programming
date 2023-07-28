#include <stdio.h>
/**
 * _strncat - concatenates two string with another string
 * @dest: destination string
 * @src: string source
 * @n: size of string to copy
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenDest = 0;
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
		lenDest++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[lenDest++] = src[y];
		y++;
	}
	return (dest);
}

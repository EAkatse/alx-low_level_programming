#include "main.h"
/**
 * _strlen - returns the length of a str
 * @s: str
 * Return: the length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}


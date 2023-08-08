#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		concatenated[a] = s1[a];

	for (b = 0; b < len2; b++)
		concatenated[a + b] = s2[b];

	return (concatenated);
}

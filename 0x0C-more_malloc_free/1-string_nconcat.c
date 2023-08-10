#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes from s2 to concatenate.
 * Return: returns pointer to the concatenated string or  NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	concat = (char *)malloc(len1 + n + 1);

	if (concat == NULL)
		return (NULL);

	strncpy(concat, s1, len1);
	strncat(concat, s2, n);

	concat[len1 + n] = '\0';
	return (concat);
}

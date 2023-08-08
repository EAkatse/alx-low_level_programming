#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a given string
 * @str: string to be duplicated
 * Return: pointer to the duplicate string, or NULL
 *
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

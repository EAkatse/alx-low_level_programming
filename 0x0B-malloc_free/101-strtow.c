#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/**
 * is_separator - Chccks if a character is a separator
 * @c: the character to check.
 * Return: true if c is a separator, false otherwise.
 */
bool is_separator(char c)
{
	return (c == ' ');
}

/**
 * count_words - counts the number of words in a string.
 * @str: the input string.
 * Return: the number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		while (is_separator(str[i]))
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != '\0' && !is_separator(str[i]))
				i++;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: the input string.
 * Return: a pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, start, end, word_length;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (str[j] != '\0')
	{
		while (is_separator(str[j]))
			j++;
		start = j;
		while (str[j] != '\0' && !is_separator(str[j]))
			j++;
		end = j - 1;

		word_length = end - start + 1;

		words[i] = malloc((word_length + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], &str[start], word_length);
		words[i][word_length] = '\0';
		i++;
	}
	words[i] = NULL;
	return (words);
}

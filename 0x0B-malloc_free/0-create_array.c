#include <stlib.h>
#include "main.h"
/**
 * create_array - creates array of chars, & initilizes it with a specific char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 * Return: a pointer to the created array, or NULL if it fails (or if size = 0)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array  = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

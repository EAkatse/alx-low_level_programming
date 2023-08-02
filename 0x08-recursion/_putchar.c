#include "main.h"
#include <unistd.h>
/**
 * _putchar -  writes the character c to the stdout
 * @c: character to print
 * Return: 1 on Success, -1 on error, errno is  set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

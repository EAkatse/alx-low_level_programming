#include <unistd.h>
/**
 * _putchar - writes char c to standard output.
 * @c: char to print to the stdout.
 * Return: 1 for Success, -1 for error, and errno be set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
/**
 * _atoi - converts a string to an integer using _atoi()
 * @s: strinig to be converted
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}

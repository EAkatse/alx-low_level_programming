#include "main.h"
#include <stdio.h>
/**
 * is_prime_helper - recursively checks if a number is prime
 * @n: number to check
 * @divisor: the current divisor being checked
 * Return: 1 if @n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 2)
		return (n == 2);

	if (n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: the number to evaluate
 * Return: 1 if @n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

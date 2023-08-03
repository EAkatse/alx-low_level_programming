#include <stdio.h>
#include <stdbool.h>

bool is_palindrome_helper(char *left, char *right);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len++;
	return (is_palindrome_helper(s, s + len - 1));
}

/**
 * is_palindrome_helper - Recursive helper to check if a string is a palindrome
 * @left: Pointer to the leftmost character of the current substring to check
 * @right: Pointer to the rightmost character of the current substring to check
 * Return: true if the substring is a palindrome, false otherwise
 */
bool is_palindrome_helper(char *left, char *right)
{
	if (left >= right)
		return (true);
	if (*left == *right)
		return (is_palindrome_helper(left + 1, right - 1));
	return (false);
}

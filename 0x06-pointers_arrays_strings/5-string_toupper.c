/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: string
 * Return: char
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i++] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}

/**
 * _strncpy - copies a string
 * @dest: str destination
 * @src: str source
 * @n: nth string to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[i] != '\0')
	{
		dest[x] = src[x];
		i++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

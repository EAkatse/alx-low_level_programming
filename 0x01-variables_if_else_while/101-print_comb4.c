#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combination of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (l = m + 1; l < 10; l++)
			{
				if (l > m && m > n)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(l + '0');
					if (n != 7 || m != 8 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

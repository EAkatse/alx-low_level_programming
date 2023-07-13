#include <stdio.h>

/**
 * main - prints the size of various datat types to the stdout
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int lt;
	long long int llt;
	float f;

	printf("Size of a char:%d byte(s)\n", sizeof(char));
	printf("Size of a int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%d byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%d byte(s)\n", sizeof(long long int));
	printf("Size of a float:%d byte(s)\n", sizeof(float));
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 * This code prints the first 50 fibonacci number
 * Author-EngineerPhoenix
 * Return: 0 success
 */
int main(void)
{
	long int a, j, b, sum;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	for (j = 2; j < 50; j++)
	{
		sum = a + b;
		j != 49 ? printf("%lu, ", sum) : printf("%lu\n", sum);
		a = b;
		b = sum;
	}
	return (0);
}

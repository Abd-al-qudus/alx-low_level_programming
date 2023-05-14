#include <stdio.h>

/**
 * main - entry point
 * This code prints the sum of fibonacci number that does
 * not exceed 4000000
 * Author-EngineerPhoenix
 * Return: 0 success
 */
int main(void)
{
	long int a, j, b, num, next;

	a = 1;
	b = 2;
	num = 2;
	for (j = 2; ; j++)
	{
		next = a + b;
		if (next > 4000000)
			break;
		(next % 2 == 0) ? num += next : num;
		a = b;
		b = next;
	}
	printf("%lu\n", num);
	return (0);
}

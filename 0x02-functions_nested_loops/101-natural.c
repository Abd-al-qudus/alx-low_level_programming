#include <stdio.h>

/**
 * main - entry point of other functions
 * This code print the sum of all natural numbers
 * below 1024
 * Author-EngineerPhoenix
 * Return: 0 success always
 */
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
		(i % 3 == 0 || i % 5 == 0) ? sum += i : sum;
	printf("%d\n", sum);
	return (0);
}

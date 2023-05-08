#include <stdio.h>

/**
 * main - call other functions
 * This code prints all possible combination of two digit
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c < 9)
		{
			putchar('0' + c);
			putchar(',');
		}
		else
			putchar('0' + c);
	}
	putchar('\n');
	return (0);
}

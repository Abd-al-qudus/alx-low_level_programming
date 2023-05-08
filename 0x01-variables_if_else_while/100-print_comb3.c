#include <stdio.h>

/**
 * main - call other functions
 * This code prints all possible combination of two digit
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (c < d && c + d <= 17)
			{
				putchar('0' + c);
				putchar('0' + d);
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

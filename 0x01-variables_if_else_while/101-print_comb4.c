#include <stdio.h>

/**
 * main - call other functions
 * This code prints all possible combination of three digit
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int c, d, e;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 10; d++)
		{
			for (e = 0; e < 10; e++)
			{
				if (c < d && d < e && c + d + e <= 24)
				{
					putchar('0' + c);
					putchar('0' + d);
					putchar('0' + e);
					if (c + d + e != 24)
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

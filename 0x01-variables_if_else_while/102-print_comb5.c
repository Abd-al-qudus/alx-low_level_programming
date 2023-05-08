#include <stdio.h>

/**
 * main - call other functions
 * This code prints two two digits combo
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
				if (a + b < c + d && b < d && a <= c)
				{
					if (a + b + c + d <= 35)
					{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (c + d + a + b < 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		}
	}
	}
	putchar('\n');
	return (0);
}

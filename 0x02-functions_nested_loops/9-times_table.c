#include "main.h"

/**
 * times_table - print multiplication table
 * Author-EngineerPhoenix
 * Return: void
 */
void times_table(void)
{
	int i, j, first, last, prod;

	i = 0;
	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			first = prod / 10;
			last = prod % 10;
			if (prod < 10)
			{
				_putchar('0' + last);
				if (j != 9)
				{
					_putchar(',');
					if (i * (j + 1) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + first);
				_putchar('0' + last);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		i++;
	}
}

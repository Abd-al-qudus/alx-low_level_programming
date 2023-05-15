#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: limit
 * Author-EngineerPhoenix
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, first, mid, last, prod;

	if (n <= 15 && n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
			prod = i * j, first = prod / 100, last = prod % 10, mid = (prod / 10) % 10;
			if (prod < 10)
			{
				_putchar('0' + last);
				if (j != n)
				{
					_putchar(',');
					(i * (j + 1) < 10) ? _putchar(' '), _putchar(' ')
						 : _putchar(' '), _putchar(' ');
				}
			}
			else if (prod < 100)
			{
				_putchar('0' + mid), _putchar('0' + last);
				if (j != n)
				{
					_putchar(',');
					(i * (j + 1) < 100) ? (_putchar(' '), _putchar(' ')) : _putchar(' ');
				}
			}
			else
			{
				_putchar('0' + first), _putchar('0' + mid), _putchar('0' + last);
				if (j != n)
					_putchar(','), _putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
	}
}

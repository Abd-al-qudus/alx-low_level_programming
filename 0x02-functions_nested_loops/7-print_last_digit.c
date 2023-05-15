#include "main.h"

/**
 * print_last_digit - print the past digit of a number
 * @n: digit to limit
 * Author-EngineerPhoenix
 * Return: the digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;
	_putchar('0' + last);
	return (last);
}

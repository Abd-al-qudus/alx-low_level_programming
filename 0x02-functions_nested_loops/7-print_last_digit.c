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

	if (n < 0)
		n *= -1;
	last = n % 10;
	_putchar('0' + last);
	return (last);
}

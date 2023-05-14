#include "main.h"

/**
 * _write - write all chars with putchar
 * @str: array of chars to write
 * Author-EngineerPhoenix
 * Return: void
 */
void _write(char str[])
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - call other function
 * Author-EngineerPhoenix
 * This script prints _putchar
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar\n";

	_write(str);
	return (0);
}

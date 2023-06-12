#include "main.h"
/**
 * puts2 - prints every second character of a string
 * @str: string to print
 * Author: EngineerPhoenix
 * Return: void
 */
void puts2(char *str)
{
	char *cpy;
	int i;

	cpy = str;
	i = 0;
	while (cpy[i] != '\0')
	{
		_putchar(*(cpy + i));
		i += 2;
	}
	_putchar('\n');
}

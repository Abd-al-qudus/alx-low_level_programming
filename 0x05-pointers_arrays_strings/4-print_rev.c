#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: string to get length
 * Author: EngineerPhoenix
 * Return: length
 */
int _strlen(char *s)
{
	char *cpy;
	int length;

	for (cpy = s, length = 0; *cpy != '\0'; cpy++)
		length++;
	return (length);
}

/**
 * print_rev - reverse and print the string
 * @s: string to reverse
 * Author: EngineerPhoenix
 * Return: void
 */
void print_rev(char *s)
{
	char *cpy;
	int j;

	cpy = s;
	for (j = _strlen(cpy) - 1; j >= 0; j--)
		_putchar(*(s + j));
	_putchar('\n');
}

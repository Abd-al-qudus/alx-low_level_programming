#include "main.h"

/**
 * print_alphabet - print all alphabet in lower case
 * followed by a new line
 * Author-EngineerPhoenix
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}

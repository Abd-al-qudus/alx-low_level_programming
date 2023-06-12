#include "main.h"
/**
 * _puts - write input to stdout
 * @str: string to write
 * Author: EngineerPhoenix
 * Return: void
 */
void _puts(char *str)
{
	char *cpy;

	for (cpy = str; *cpy != '\0'; cpy++)
	{
		_putchar(*cpy);
	}
	_putchar('\n');
}

#include <unistd.h>

/**
 * _putchar - write a char to stdout
 * @c: char to write
 * Author-EngineerPhoenix
 * Return: a single char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

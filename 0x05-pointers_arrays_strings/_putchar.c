#include <unistd.h>
/**
 * _putchar - write chars to stdout
 * @c: char to write
 * Author: EngineerPhoenix
 * Return: int value of char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

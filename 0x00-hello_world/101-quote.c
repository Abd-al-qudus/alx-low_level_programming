#include <unistd.h>

/**
 * main - calls other function
 * This script prints and that piece of art is useful"
 * Dora Korpar, 2015-10-19, followed by a new line
 * Author-EngineerPhoenix
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

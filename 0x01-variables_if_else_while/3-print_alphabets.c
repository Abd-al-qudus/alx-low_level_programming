#include <stdio.h>

/**
 * main - call other function
 * This code prints body small and capital letters
 * followed by a new line
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

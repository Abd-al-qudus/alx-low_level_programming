#include <stdio.h>

/**
 * main - call other functions
 * This code prints all numbers in base 16
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
		putchar('0' + c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

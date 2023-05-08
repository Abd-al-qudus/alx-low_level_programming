#include <stdio.h>

/**
 * main - call other functions
 * This code prints all alphabet in lowercase
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

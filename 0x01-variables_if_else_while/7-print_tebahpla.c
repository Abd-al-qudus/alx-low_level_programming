#include <stdio.h>

/**
 * main - call other functions
 * This code prints all alphabet in reverse lowercase
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}

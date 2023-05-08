#include <stdio.h>

/**
 * main - call other functions
 * This code prints all alphabet in lowercase
 * except q and e
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}

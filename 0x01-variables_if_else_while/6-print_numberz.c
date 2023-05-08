#include <stdio.h>

/**
 * main - call other function
 * This code prints all digit in base 10 with putchar
 * This is just a replica of task 5
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}

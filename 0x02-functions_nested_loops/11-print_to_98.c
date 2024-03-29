#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print any number to 98
 * @n: number to print
 * Author-EngineerPhoenix
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}

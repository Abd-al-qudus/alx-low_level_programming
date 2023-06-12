#include "main.h"
#include <stdio.h>
/**
 * print_array - print an array of integers
 * @a: array to print
 * @n: number of elements
 * Author: EngineerPhoenix
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			i < n - 1 ? printf("%d, ", *(a + i)) : printf("%d\n", *(a + i));
	}
}


#include "main.h"
/**
 * swap_int - swap integer value
 * @a: first int
 * @b: second int
 * Author: EngineerPhoenix
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

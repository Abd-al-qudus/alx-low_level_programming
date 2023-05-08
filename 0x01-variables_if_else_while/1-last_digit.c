#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - call other function
 * This code checks the last digit of some numbers and
 * print some text
 * Author-EngineerPhoenix
 * Return: 0 always success
 */
int main(void)
{
	int n, last, new;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		new = n * -1;
	last = new % 10;
	if (n < 0)
		last = last * -1;
	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}

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
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;
	if (last_dig == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_dig);
	else if (last_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	else if (last_dig < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	return (0);
}

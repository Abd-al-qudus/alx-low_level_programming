#include "main.h"

/**
 * jack_bauer - print the time of the day
 * Author-EngineerPhoenix
 * Return: void
 */
void jack_bauer(void)
{
	int hour, min;

	hour = 0, min = 0;
	while (hour < 24)
	{
		int fhour, lhour, fmin, lmin;

		fhour = hour / 10;
		lhour = hour % 10;
		min = 0;
		while (min < 60)
		{
			fmin = min / 10;
			lmin = min % 10;
			_putchar('0' + fhour);
			_putchar('0' + lhour);
			_putchar(':');
			_putchar('0' + fmin);
			_putchar('0' + lmin);
			_putchar('\n');
			min++;
		}
		hour++;
	}
}

#include "main.h"

/**
  * jack_bauer - prints the tens and ones digit of an hour value.
  *
  * Return: no return value
  */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));

			_putchar(':');

			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));

			_putchar('\n');

			minute++;
		}
		hour++;
		minute = 0;
	}
}


#include "main.h"

/**
  * more_numbers - prints 10 times the numbers
  * from 0 - 14.
  *
  * Return: no value
  */

void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}

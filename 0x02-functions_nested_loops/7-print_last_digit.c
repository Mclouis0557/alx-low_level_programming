#include "main.h"
#include <stdlib.h>

/**
  * print_last_digit - function the last digit
  * of a number.
  *
  * @x: input number as integer
  *
  * Return: returns value to last digit
  */

int print_last_digit(int x)
{
	int y;

	y = abs(x % 10);
	_putchar(y + '0');
	return (y);
}

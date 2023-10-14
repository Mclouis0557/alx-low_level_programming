#include "main.h"

/**
  * print_line - draw a straight line in terminal
  *
  * @n: number of times character is printed
  *
  * Return: no value
  */

void print_line(int n)
{
	int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	_putchar('\n');
}

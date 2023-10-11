#include "main.h"

/**
  * print_alphabet_x10 - this function prints
  * the alphabets in lowercase 10 times
  *
  * Return: no value returned
  */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		int n = 97;

		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}

}

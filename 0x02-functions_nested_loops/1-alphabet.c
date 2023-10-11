#include "main.h"

/**
  * print_alphabet - this function prints the alphabet in lowercase
  *
  * Return: no return value
  */

void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');

}

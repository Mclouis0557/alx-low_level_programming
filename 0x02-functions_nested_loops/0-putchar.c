#include "main.h"

/**
  * main - This is a fucntion
  *
  * Return: returns 0
  */

int main(void)
{
	char *str = "_putchar";
	int i = 0;

	while (i < (int) sizeof(str))
	{
		_putchar((char)str[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

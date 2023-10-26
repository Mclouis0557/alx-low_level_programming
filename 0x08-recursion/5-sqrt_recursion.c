#include "main.h"

/**
  * _sqrt_recursion - return the natural square root of a number
  *
  * @n: number to calculate sqr.
  *
  * Return: the resulting sqr
  */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
}

#include "main.h"

/**
  * _pow_recursion - raise the value of x to the power of y
  *
  * @x: integer to return value
  * @y: integer to raise to the power
  *
  * Return: value of x
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}

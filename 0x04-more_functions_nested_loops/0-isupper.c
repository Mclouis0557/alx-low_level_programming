#include "main.h"

/**
  *_isupper - checks if parameter is uppercase character
  *
  *@c: input character
  *
  * Return: returns 1 if character is uppercase, 0 if
  * otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

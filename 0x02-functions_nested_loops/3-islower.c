#include "main.h"

/**
  * _islower - checks for lowercase
  *
  *@c: arguement value
  *
  *Return: Always 1 (success)
  */

int _islower(int c)
{
	if (c >= 97 && c  <= 122)
	{
		return (1);
	}
	else
	{
		return (0);

	}
	return (0);
}

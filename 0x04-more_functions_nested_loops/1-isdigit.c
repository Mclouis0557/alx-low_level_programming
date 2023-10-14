#include "main.h"

/**
  *_isdigit - checks for a digit from 0 through 9.
  *
  *@c: input character.
  *
  * Return: return 1 if character is digit,
  * otherwise return 0.
  */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
  * _isalpha - checks for uppercase
  *
  *@c: arguement value
  *
  *Return: Always 1 (success)
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

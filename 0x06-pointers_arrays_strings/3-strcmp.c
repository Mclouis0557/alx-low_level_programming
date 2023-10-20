#include "main.h"

/**
  * _strcmp - compare two strings
  *
  * @s1: first string to compare
  * @s2: second string to compare
  *
  * Return: 0 if s1 == s2,
  * another number if not
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

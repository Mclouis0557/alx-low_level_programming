#include "main.h"
#include <string.h>

/**
  * _strlen - length of a string
  *
  * @s: string value
  *
  * Return: no value
  */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

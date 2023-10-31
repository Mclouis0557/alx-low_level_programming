#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - concatenate two strings
  *
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  *
  * Return: pointer to concat result, Null if failed.
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *new_str;

	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		new_str[i + len1] = s2[i];
	}
	new_str[len1 + len2] = '\0';
	return (new_str);
}

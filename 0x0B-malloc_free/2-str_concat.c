#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - concatenate two strings
  *
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  *
  * Return: pointer to allocated space
  */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
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
	new_str = malloc(len1 + len2 + 1 * (sizeof(char)));

	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, len2);
	new_str[len1 + len2] = '\0';
	return (new_str);
	free(new_str);
}

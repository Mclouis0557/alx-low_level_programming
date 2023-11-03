#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenate two strings.
  *
  * @s1: first string.
  * @s2: second string.
  * @n: amount of bytes.
  *
  * Return: pointer to the allocated memory.
  * if fail, return NULL.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_out;
	unsigned int str1, str2, str3, i;

	if (s1 == NULL)
	{
		s1 = NULL;
	}
	if (s2 == NULL)
	{
		s2 = NULL;
	}
	for (str1 = 0; s1[str1] != '\0'; str1++)
		;
	for (str2 = 0; s2[str2] != '\0'; str2++)
		;
	if (n > str2)
		n = str2;

	str3 = str1 + n;

	str_out = malloc(str3 + 1);

	if (str_out == NULL)
		return (NULL);

	for (i = 0; i < str3; i++)
		if (i < str1)
			str_out[i] = s1[i];
		else
			str_out[i] = s2[i - str1];

	str_out[i] = '\0';

	return (str_out);
}

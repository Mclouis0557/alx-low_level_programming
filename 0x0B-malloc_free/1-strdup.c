#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - return a pointer to a newly allocated space
  * in memory.
  *
  * @str: string to be copied.
  *
  * Return: address to the new memory space with the copied string.
  */

char *_strdup(char *str)
{
	int len;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_str = malloc(len + 1 * (sizeof(char)));

	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, str, len);
	new_str[len] = '\0';
	return (new_str);
	free(new_str);
}

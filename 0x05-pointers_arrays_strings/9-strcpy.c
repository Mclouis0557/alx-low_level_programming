#include "main.h"

/**
  * _strcpy - copies string pointed to by src to buffer
  *
  * @dest: pointer to the buffer to copy string
  * @src: string to be copied
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

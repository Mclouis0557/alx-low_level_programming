#include "main.h"

/**
  * _strncat - concatenate two string
  *
  * @n: number of bytes to concatenate
  * @src: string source
  * @dest: string destination
  *
  * Return: pointer to the returning string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

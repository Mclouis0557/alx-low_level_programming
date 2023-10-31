#include "main.h"
#include <stdlib.h>

/**
  * create_array - create an array of chars
  *
  * @size: size of array
  * @c: char storage
  *
  * Return: pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *carr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	carr = malloc(size * (sizeof(char)));
	{
		if (carr == 0)
			return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		carr[i] = c;
	}
	return (carr);
	free(carr);
}

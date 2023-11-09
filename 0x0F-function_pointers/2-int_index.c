#include "function_pointers.h"

/**
  * int_index - seach for an integer
  *
  * @array: input integer array
  * @size: size of array
  * @cmp: pointer to function
  *
  * Return: index of first element,
  * -1 if no elementmatches, -1 is size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}

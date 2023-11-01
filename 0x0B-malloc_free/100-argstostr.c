#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - concatenate all arguments
  *
  * @ac: argument count
  * @av: argument vector
  *
  * Return: pointer to new string, null if args are Null or 0
  */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, total_len;

	total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

	new_str = malloc((total_len + 1) * (sizeof(char)));
	{
		if (new_str == NULL)
		{
			return (NULL);
		}
		new_str[0] = '\0';

		for (i = 0; i < ac; i++)
		{
			strcat(new_str, av[i]);
			strcat(new_str, "\n");
		}
	}
	return (new_str);
}

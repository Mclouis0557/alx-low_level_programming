#include <stdio.h>

/**
  *main - This is a function
  *
  *Return: Always 0 (succcess)
  */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '8')
	{
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
return (0);
}

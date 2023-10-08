#include <stdio.h>

/**
  * main - prints all possible different combination of three digits.
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int i = '0';
	int j = '1';
	int k = '2';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;

	}
	putchar('\n');


	return (0);
}

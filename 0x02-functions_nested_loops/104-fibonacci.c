#include <stdio.h>
#include "main.h"

/**
  * main - Entry Point
  *
  * @n: arguement
  *
  * Program that finds and prints the first 98 fibonacci
  * numbers, starting with 1 and 2
  *
  * Return: Always 0 (success)
  */

void print_fibonacci_sequence(int n);

int main(void)
{
	int n = 98;

	if (n < 1)
	{
		printf("\n");
	}
	else if (n == 1)
	{
		printf("1\n");
	}
	else if (n == 2)
	{
		printf("1, 2\n");
	}
	else
	{
		print_fibonacci_sequence(n - 2);
	}
	return (0);
}

/**
  * print_fibonacci_sequence - prints sequnce
  *
  * @n: arguement
  *
  */
void print_fibonacci_sequence(int n)
{
	unsigned long int a = 1, b = 2;
	unsigned long int tmp;

	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n)
		{
			printf("%lu, ", a);
		}
		else
		{
			printf("%lu\n", a);
		}
		tmp = a;
		a = b;
		b = tmp + b;
	}
	printf("\n");
}

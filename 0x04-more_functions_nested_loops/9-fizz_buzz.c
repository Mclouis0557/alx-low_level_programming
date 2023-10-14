#include <stdio.h>

/**
  * main - prints fizz-buzz every multiple of
  * 3 and 5.
  *
  * Return: Always 0 (success).
  */

int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
			printf(" Buzz");
		else
		{
			printf(" %d", i);
		}
	}
	printf(" ");
	printf("\n");
	return (0);
}

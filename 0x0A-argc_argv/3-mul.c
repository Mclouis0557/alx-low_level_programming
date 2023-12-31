#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that multiplies two numbers.
  *
  * @argc: number of command line arg.
  * @argv: array of command line arg.
  *
  * Return: 1 if no argument received, 0 if success.
  */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);

	return (0);
}

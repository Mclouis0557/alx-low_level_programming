#include <stdio.h>

/**
  * main - program that prints all arguments received.
  *
  * @argc: number of command line arg.
  * @argv: array of command line arg.
  *
  * Return: Always (0) success.
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>

/**
  * main - program that prints the number of argument.
  *
  * @argc: number of command line argumnent.
  * @argv: array of command line argument.
  *
  * Return: Always 0 (success).
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

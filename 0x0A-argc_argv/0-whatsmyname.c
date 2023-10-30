#include <stdio.h>

/**
  * main - prints its name.
  *
  * @argc: number of command line arg.
  * @argv: array of command line arg.
  *
  * Return: Always 0 (success).
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

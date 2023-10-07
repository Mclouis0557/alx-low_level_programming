#include <stdio.h>

/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	int n;
	int m;
	/** declare n for the int portion of the hex code*/
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	/** declare m for the char portion of the hex code*/
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n = 97;
	int M = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (M <= 90)
	{
		putchar(M);
		M++;
	}
	putchar('\n');
	return (0);
}

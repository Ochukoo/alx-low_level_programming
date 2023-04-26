#include <stdio.h>

/**
 * main - print the first 52 of the fibonacci numbers
 * Return: no return
 */

int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%1d, %1d", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %1d", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer of first integer
 * @b: pointer of second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}

#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int c, d, count;

	for (c = 0; c < n - 1; c++)
	{
		for (d = c + 1; d > 0; d--)
		{
			count = *(a + d);
			*(a + d) = *(a + (d - 1));
			*(a + (d - 1)) = count;
		}
	}
}

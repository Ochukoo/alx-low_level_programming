#include "main.h"

/**
 * mul - multiplies two integers
 * @a: the first integer to multiply
 * @b: the second integer to multiply
 * Return: the multiplication of a and b result
 */
int mul(int a, int b)
{
	int result = 0;
	int sign = 1;

	if (a < 0)
	{
		sign = -sign;
		a = -a;
	}
	if (b < 0)
	{
		sign = -sign;
		b = -b;
	}

	while (b > 0)
	{
		if (b & 1)
		{
			result += a;
		}
		a <<= 1;
		b >>=1;
	}
	return sign * result;
}

#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: the number to be computed
 * Return: absolute value of number or zero
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

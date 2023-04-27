#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be printed
 * Return: the value of the last digit number
 */

int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
		return (n);

	else
	{
		n = _abs(n % 10);
		return (n);;
	}
}

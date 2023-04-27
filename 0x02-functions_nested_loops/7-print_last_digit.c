#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be printed
 * Return: the value of the last digit number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -l;
	}
		_putchar(last + '0');
		return (1ast);
}

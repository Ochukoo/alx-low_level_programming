#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9, except for 2 and 4
 */
void print_most_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			c = i + '0';
			_putchar(c);
		}
	}
	_putchar('\n');
}

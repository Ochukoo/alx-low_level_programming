#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: void.
 */
void puts_half(char *str)
{
	int length = 0, a;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		length++;
	}

	if (length % 2 == 1)
		a = length / 2;
	else
		a = (length - 1) / 2;

	for (a++; a < length; a++)
		_putchar(str[a]);
	_putchar('\n');
}

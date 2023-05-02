#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0, a;

	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}

	if (len % 2 == 1)
		a = len / 2;
	else
		a = (len - 1) / 2;

	for (a++; a < count; a++)
		_putchar(str[a]);
	_putchar('\n');
}

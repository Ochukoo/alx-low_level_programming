#include "main.h"

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[length]);
		length++;
	}
}

#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: pointer of the string.
 * Return: void.
 */
void puts2(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (length % 2 == 0)
			_putchar(str[length]);
		length++;
	}
}

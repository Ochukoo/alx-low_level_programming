#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string to be converted.
 * Return: the pointer to be converted
 */

char *string_toupper(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		if ((*(s + len) >= 97) && (*(s + len) <= 122))
			*(s + len) = *(s + len) - 32;
		len++;
	}

	return (s);
}

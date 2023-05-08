#include "main.h"

/**
 * _strchr - function to locates a character in a string,
 * @s: pointer to string.
 * @c: character found in the string
 * Return: the pointer to the first occurrence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
	{
			return (s + i);
	}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}

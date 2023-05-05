#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string to encode.
 * Return: the pointer to encoded string.
 */

char *leet(char *s)
{
	int len = 0, a;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + len) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(s + len) == low_letters[i] || *(s + len) == upp_letters[a])
			{
				*(s + len) = numbers[a];
				break;
			}
		}
		len++;
	}

	return (s);
}

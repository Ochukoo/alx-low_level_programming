#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string to be encoded.
 * Return: the pointer of the string.
 */

char *rot13(char *s)
{
	int len = 0, a;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + len) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + len) == alphabet[a])
			{
				*(s + len) = rot13[a];
				break;
			}
		}
		len++;
	}

	return (s);
}

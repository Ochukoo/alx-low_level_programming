#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0, a, b;
	char *str, tmp;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}
	str = s;

	for (a = 0; a < (len - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			tmp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = tmp;
		}
	}
}

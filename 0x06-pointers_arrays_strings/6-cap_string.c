#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string to be modified.
 * Return: the pointer to the modified string.
 */

char *cap_string(char *s)
{
	int len = 0, a;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + len) >= 97 && *(s + len) <= 122)
		*(s + len) = *(s + len) - 32;
	len++;
	while (*(s + len) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + len) == sep_words[a])
			{
				if ((*(s + (len + 1)) >= 97) && (*(s + (len + 1)) <= 122))
					*(s + (len + 1)) = *(s + (len + 1)) - 32;
				break;
			}
		}
		len++;
	}
	return (s);
}

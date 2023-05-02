#include" main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string to be converted
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int length = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + length) != '\0')
	{
		if (size > 0 && (*(s + length) < '0' || *(s + length) > '9'))
			break;

		if (*(s + length) == '-')
			pn *= -1;

		if ((*(s + length) >= '0') && (*(s + length) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		length++;
	}

	for (i = length - size; i < length; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);

#include "main.h"

/**
 * _memset - the function fills memory with a constant byte,
 * @s: pointer to memory area.
 * @b: constant byte to be completed.
 * @n: number of bytes to be completed.
 * Return: the pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] =  b;

	return (s);
}

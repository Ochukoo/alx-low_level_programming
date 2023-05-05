#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * buffer pointed to the dest.
 * @dest: pointer of the destination.
 * @src: pointer of the source.
 * Return: void.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (len >= 0)
	{
		*(dest + len) = *(src + len);
		if (*(src + len) == '\0')
			break;
		len++;
	}
	return (dest);
}

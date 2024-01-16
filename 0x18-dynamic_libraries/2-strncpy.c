#include "main.h"

/**
 * _strncpy -It consist two words
 * @dest : params to a pointer.
 * @src : Character to a params
 * @n : parameter integer.
 * Return: *destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

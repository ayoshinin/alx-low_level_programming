#include "main.h"

/**
 * _strncat -It is a two words
 * @dest : It pointer to char parameter.
 * @src:It is a source of pointer char.
 * @n : It is a integer parameter.
 * Return: *destination.
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}


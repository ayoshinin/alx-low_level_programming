#include "main.h"

/**
 * *_strcat - A type of function that  commute srtings
 * @dest:  pointer to a char
 * @src: Given param to a char
 * Return: It return value of destination.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}


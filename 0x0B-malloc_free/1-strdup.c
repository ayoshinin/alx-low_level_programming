#include "main.h"
#include <stdlib.h>

/**
 * _strdup - It creates a duplicate string using malloc.
 * @str: Duplicate a string.
 * Return: It returns the pointer to a duplicated string.
 */

char *_strdup(char *str)
{
	char *a;
	int j, c;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	a = malloc(1 * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}

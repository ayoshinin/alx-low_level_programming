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
	int j, k;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < i; b++)
		a[b] = str[b];
	a[b] = '\0';

	return (a);
}

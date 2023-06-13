#include "main.h"
#include <stdlib.h>

/**
 * create_array - It create an array characters.
 * @size:array size.
 * @c: stored character.
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int j;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		cr[j] = c;

	return (cr);
}

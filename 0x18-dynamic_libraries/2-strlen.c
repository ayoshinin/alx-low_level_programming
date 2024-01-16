#include "main.h"
/**
 * _strlen - It resolves and outputs length of string
 * @s: A source of pointer to the string.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}


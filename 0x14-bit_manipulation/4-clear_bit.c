#include "main.h"

/**
 * clear_bit - set the bit value 0 at index.
 * @n: pointer of  unsigned long integer.
 * @index: index format of a the bit
 * Return: integer.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}


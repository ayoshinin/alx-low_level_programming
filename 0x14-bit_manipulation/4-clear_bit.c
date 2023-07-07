#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index.
 * @n: pointer of an unsigned long int.
 * @index: indexing of the bit
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


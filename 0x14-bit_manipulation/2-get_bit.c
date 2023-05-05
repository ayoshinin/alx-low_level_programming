#include "main.h"

/**
 * get_bit -  The value of a bit at a given index.
 * @n: The bit.
 * @index:  To ge index value at - indices start at 0.
 *
 * Return:  error occurs - -1.
 * Otherwise -value of the bit at index format.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}


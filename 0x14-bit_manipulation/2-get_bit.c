#include "main.h"

/**
 * get_bit - it returns the value of a bit at index
 * @n: parameter unsigned long int
 * @index: parameter.
 * Return: integer.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigne int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}

	return (-1);
}


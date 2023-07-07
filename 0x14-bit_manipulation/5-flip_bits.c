#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * @n: parameter of n
 * @m: parameter of m
 * Return: unsigned integer.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int len;

	for (len = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			len++;
	}

	return (len);
}


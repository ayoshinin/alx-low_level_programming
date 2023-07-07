#include "main.h"

/**
 * get_endianness - It checks the endianness
 * Return: integer.
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}


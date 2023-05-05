#include "main.h"

/**
 * get_endianness - Trying to check the endianness
 * Return: integer
 */

int get_endianness(void)
{
	unsigned int y;
	char *c;

	y = 1;
	c = (char *) &y;

	return ((int)*c);
}

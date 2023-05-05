#include "main.h"

/**
 * print_binary - Print  binary replication of a number.
 * @n:  number is to be printed in a binary number format.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

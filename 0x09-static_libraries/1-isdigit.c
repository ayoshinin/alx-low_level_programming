#include "main.h"
/**
 * _isdigit - It enables one to checks for a digit
 * @c: input
 *
 * Return: 1 if the digit is c.
 * 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


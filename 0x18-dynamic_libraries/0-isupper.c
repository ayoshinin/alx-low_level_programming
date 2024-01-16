#include "main.h"
/**
 * _isupper -It checks for letters that are uppercase.
 *  @c: input.
 *
 *  Return: 1 if is uppercase
 *  otherwise 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


#include "main.h"
/**
 * _puts - pusts to stdout
 * @str: params
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

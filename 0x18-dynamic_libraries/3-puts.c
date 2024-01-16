#include "main.h"
/**
 * _puts:-It helps to print a string which move along with a new line.
 * @str:It points to a string  pointer.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}


#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: printing of name.
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

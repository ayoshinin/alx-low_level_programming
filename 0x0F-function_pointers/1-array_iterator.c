#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A given parameter of function,
 *  on each array element.
 * on each element of an array
 * @array: iteration of array.
 * @size: array size.
 * @action:used function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}

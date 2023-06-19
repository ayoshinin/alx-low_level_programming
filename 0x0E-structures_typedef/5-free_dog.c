#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  A function that Frees dog.
 * @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

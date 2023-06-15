#include <stdlib.h>
/**
  * malloc_checked - Creating a function that allocates memory using malloc.
  * @b: memory of allocated size.
  *
  * Return:It allocates memory to a given pointer.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

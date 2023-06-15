#include <stdlib.h>
#include "main.h"
/**
  * _calloc - It uses an array of memory to store malloc.
  * @nmemb: no of elements in array.
  * @size: array size of element.
  *
  * Return: NULL if the size or nmeb is 0.
  * NULL if malloc fails.
  * Sucessful if the memory to be allocated to the Pointer .
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}

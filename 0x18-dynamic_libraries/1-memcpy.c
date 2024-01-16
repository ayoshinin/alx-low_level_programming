#include "main.h"
/**
 * _memcpy -Avaliable copies memory area,
 * @dest:the destination memory area.
 * @src:The source memory area.
 * @n:Amount of  bytes filled.
 * Return: The pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}


#include "main.h"
/**
 * _strcpy - Duplicating the copy string to the end of other.
 * @dest: pointer to string to be copied to.
 * @src:  Copy of the pointer string to  be copied.
 *
 * Return:It moves the  pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}


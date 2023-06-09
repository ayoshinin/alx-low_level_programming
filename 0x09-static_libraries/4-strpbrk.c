#include "main.h"

/**
 * _strpbrk - It helps to source for a string for  a set of bytes.
 * @s: the first string.
 * @accept: A second string.
 * Return: It gives pointer to the byte in s that matches one of the
 * accepted byte or it returns a NULL byte if not found in the function.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}


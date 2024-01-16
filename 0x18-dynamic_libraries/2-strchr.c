#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Find a character in a string
 * @s: string to look for.
 * @c: character which is avaliable.
 *
 * Return: a pointer to the first number of the character
 * c  NULL if the character is not found or in a string.
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}


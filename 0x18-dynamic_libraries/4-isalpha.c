#include "main.h"
/**
 * _isalpha -This file checks for alphabetic character
 *
 * @c: It helps to checked for character.
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


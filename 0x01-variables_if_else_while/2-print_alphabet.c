#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints alphabet in lower case.
 * Return: 0 sucessful.
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}

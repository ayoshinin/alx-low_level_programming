#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints function in lower case
 *
 * Return: 0 at all time (sucessful)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}

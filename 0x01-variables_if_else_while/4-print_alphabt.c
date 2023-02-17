#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: How to print alaphbet function in lowercase.
 *
 * Return: It is always a value of 0 at all time which means sucessful.
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}

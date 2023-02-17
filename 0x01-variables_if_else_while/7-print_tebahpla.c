#include<stdio.h>

/**
 * main - Entry point
 *
 * Description:Program that print the lower case in reverse form
 *
 * Return: 0 always which means sucess.
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}

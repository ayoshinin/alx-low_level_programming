#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: printing numbers in lowercase base 16
 *
 * Return: 0 always sucess
 */

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump till 96; `*/
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}

#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints all combination of single numbers.
 *
 * Return:Always 0 which means sucess.
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++digit;
	}
	putchar('\n');

	return (0);
}

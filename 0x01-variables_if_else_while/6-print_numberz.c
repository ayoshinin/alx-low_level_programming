#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: printing functions that are in binary.
 *
 * Return: It records 0 at all time(sucess)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}

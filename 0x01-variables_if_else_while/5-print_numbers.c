#include<stdio.h>

/**
 * main - Entry point
 *
 * Description:Prints function of single numbers in binary number.
 *
 * Return: 0 at all time.
 */


int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}

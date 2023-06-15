#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main -It multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument.
 * Return: integers.
**/

int main(int argc, char *argv[])
{
	unsigned long mul;
	int j, k;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (argv[j][k] > 57 || argv[j][k] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}


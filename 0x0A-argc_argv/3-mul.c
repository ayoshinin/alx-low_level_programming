#include <stdio.h>
#include <stdlib.h>
/**
 * main - print  multiplication of two arguments.
 * @argc:   size of arguments.
 * @argv: An  argument vector
 *
 * Return: 1 in case is  less of 2 arguments otherwise 0.
 */
int main(int argc, char **argv)
{
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiplication = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", multiplication);
	}
	return (0);
}


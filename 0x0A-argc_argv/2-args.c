#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments of the program which are separated by new line.
 * @argc: The size of arguments.
 * @argv:It is a given argument vector
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}


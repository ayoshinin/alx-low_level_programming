#include <stdio.h>
#include <stdlib.h>
/**
 * main - print  name of the executable.
 * @argc:  size of arguments.
 * @argv:it is an argument vector
 *
 * Return: always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

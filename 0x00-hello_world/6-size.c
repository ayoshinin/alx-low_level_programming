#include <stdio.h>
/**
 * main- A program that print the size of types of computer function.
 * Return: zero if sucessful
 */
int main(void)
{
printf("Size of a char: %Iu byte(s)\n", sizeof(char));
printf("Size of an int: %Iu byte(s)\n", sizeof(int));
printf("Size of a long int: %Iu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %Iu byte(s)\n", sizeof(long long int));
printf("Size of a float: %Iu byte(s)\n", sizeof(float));
return (0);
}

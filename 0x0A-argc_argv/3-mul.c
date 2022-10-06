#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiples of two numbers
 * @argc: number of arguments passed
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, otherwise 1
 */
int main (int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}

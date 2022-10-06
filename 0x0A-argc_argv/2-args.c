#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: number of agruments passed to the fuction
 * @argv: argument vetor ofpoints to strings
 *
 * Return: 0 succcess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

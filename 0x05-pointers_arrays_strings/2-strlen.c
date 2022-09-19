#include "main.h"

/**
 * _strlen - prints the length of string
 * @s: string to check
 * return: int lenght of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (lenght);
}

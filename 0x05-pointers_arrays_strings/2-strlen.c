#include "main.h"

/**
 * _strlen - prints the length of string
 * @s: string to check
 * return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

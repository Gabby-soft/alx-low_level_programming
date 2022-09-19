#include <ctype.h>
#include "main.h"

/**
 * _isupper - function to check for uppercase character.
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	int a = isupper(c);

	if (a == 0)
		return (a);
	else
		return (1);
}

#include "main.h"

/**
 * puts2 - prints all a character
 * string, starting with the first character
 *
 * @str: the string to reference
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
		i++;
	}
	_putchar('\n');
}

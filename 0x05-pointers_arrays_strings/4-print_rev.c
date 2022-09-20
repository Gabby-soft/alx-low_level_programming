#include "main.h"

/**
 * print_rev - prints reverse strings
 * @s: the used string reference pointer
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}

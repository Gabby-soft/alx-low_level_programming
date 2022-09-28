#include "main.h"

/**
 * _puts_recursion - fuction that print a string recursively
 * @s: string to print
 * Return: void
 */

void_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

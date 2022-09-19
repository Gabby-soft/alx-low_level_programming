#include "main.h"
/**
 * print_line - a fucntion that print lines several (n) times
 *
 * @n: number of tiems to print line
 *
 * return: 0
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

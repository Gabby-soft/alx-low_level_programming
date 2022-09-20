#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers 'n'
 * @a: int array pointer
 * @n: int
 * description: numbers must be separated by comma and space.
 * Numbers should be displayed in teh same order they are stored in array
 * You can only use _putchar to print.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

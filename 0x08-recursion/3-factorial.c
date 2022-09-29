#include "main.h"
/**
 * factorial - a fuctino that return the factorial of a number
 * @n: the number
 * Return: factorial of n
 */

int factorial(int n)
{
	in (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

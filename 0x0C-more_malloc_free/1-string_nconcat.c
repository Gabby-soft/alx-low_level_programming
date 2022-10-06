#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using at most an inputed number of bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to concatenate to s1
 *
 * Return: if the functions fails - NULL. 
 * Otherwise - a pointer to the concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned in len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concate = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
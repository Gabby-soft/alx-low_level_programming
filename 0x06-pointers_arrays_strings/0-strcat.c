#include "main.h"

/**
 * _strcat - joins(conacatenat) two strings together
 * @dest: the result string
 * @src: string to add to @dest
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + 1] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
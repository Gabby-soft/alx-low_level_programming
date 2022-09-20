#include "main.h"

/**
 * _strcpy - copy the 'src' string to the pointed buffer 'dest'
 * @dest: char pointer
 * @src: char
 *
 * Return: 'dest pointed to
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

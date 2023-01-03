#include "main.h"
#include <string.h>

/**
 * print_sign - print the sign
 * @dest: to be returned
 * @src: string to copy
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int n = strlen(src);

	dest[n] = src[n];
	return (dest);
}

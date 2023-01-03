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
	int i;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}

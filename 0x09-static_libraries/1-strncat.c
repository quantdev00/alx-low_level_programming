#include "main.h"
#include <string.h>

/**
 * *_strncat - print n concatenated strings
 * @dest: destination file
 * @src: source str
 * @n: n time
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int dLen = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dLen + i] = src[i];
	dest[dLen + i] = '\0';

	return (dest);
}

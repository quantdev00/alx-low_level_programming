#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @n: func copies
 * @src: source bytes fro marea
 * @dest: destination mem area
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

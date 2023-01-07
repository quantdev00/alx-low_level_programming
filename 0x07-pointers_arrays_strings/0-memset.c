#include "main.h"

/**
 * _memset - fill memeory with constant byte
 * @n: bytes
 * @s: constant byte
 * @b: memory area pointer
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

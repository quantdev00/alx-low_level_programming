#include "main.h"

/**
 * _strchr - get char in a string
 * @c: occurence of char
 * @s: the string
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

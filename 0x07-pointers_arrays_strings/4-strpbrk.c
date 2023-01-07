#include "main.h"

/**
 * _strpbrk - searche for any set of bytes
 * @s: occurrence1
 * @accept: matches bytes one or Null
 *
 * Return:s or Null;
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

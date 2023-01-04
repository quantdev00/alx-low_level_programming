#include "main.h"
#include <string.h>

/**
 * _strcmp - strin compare
 * @s1: str 1
 * @s2: str 2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int n1 = strlen(s1);
	int n2 = strlen(s2);

	if (n1 < n2)
		return (-15);
	else if (n1 > n2)
		return (15);
	else
		return (0);
}

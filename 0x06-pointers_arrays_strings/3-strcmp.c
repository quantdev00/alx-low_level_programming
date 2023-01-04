#include "main.h"

/**
 * _strcmp - strin compare
 * @s1: str 1
 * @s2: str 2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
		return (-15);
	else if (s1 < s2)
		return (15);
	else
		return (0);
}

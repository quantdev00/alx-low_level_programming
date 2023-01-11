#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - return alphabet or not
 * @c: the character to be checked
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}

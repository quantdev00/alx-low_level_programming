#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check is lower
 * @c: The number to check
 *
 * Return: 1
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('1');
		return (1);
	}
}

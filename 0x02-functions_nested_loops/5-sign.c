#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign
 * @n: the number
 *
 * Return: 0
 */
int print_sign(int  n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	} else
	{
		_putchar('-');
		_putchar('\n');
		return (1);
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the sign
 * @n: the number
 *
 * Return: 0
 */
int print_last_digit(int  n)
{
	if (n >= 0)
	{
	int last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
	}
	else
	{
		int last_digit_negative = ((n % 10) * -1);

		_putchar(last_digit_negative + '0');
		return (last_digit_negative);
	}
}

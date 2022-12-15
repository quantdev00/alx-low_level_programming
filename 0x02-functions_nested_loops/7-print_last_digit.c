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
	if (n < 0)
	{
		return (10 - (n % 10));
	}
	else
	{
		return (n % 10);
	}
}

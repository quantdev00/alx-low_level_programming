#include "main.h"
#include <stdio.h>
#include "_putchar.h"
/**
 * print_numbers - prints a to z'
 *
 * Return: 0;
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

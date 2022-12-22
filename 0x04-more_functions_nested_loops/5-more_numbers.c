#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	long int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

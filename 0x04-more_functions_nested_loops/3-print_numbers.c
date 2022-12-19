#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints a to z'
 *
 * Return: 0;
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}

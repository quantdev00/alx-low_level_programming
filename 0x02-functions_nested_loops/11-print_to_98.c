#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print the sign
 * @n: the number to work with
 *
 * Return: 0
 */
void print_to_98(int  n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d", i);
	}
	else
	{
		for (i = n; i >= 98; i--)
			printf("%d", i);
	}
}

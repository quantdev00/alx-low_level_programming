#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - printing the diagonal
 * @n: the n time to print
 *
 * Return: 0;
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (i != 1)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}

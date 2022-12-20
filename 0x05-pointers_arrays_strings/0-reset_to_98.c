#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - reset tthe number to 98
 * @n: the number to use
 * Return: 0
 */
void reset_to_98(int *n)
{
	int **p;

	p = &n;
	**p = 98;
}

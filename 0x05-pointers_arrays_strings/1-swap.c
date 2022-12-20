#include "main.h"
#include <stdio.h>

/**
 * swap_int - reset tthe number to 98
 * @a: the number to use
 * @b: the number 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;

}

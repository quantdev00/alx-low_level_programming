#include "main.h"
#include <string.h>

/**
 * reverse_array - reversing the received array
 * @a: the array
 * @n: number of integers
 * Return: 0;
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}

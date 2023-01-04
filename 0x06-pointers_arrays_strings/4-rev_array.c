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
	int tmp[100];
	int i = n;
	int j = 0;

	while (a[i] != '\0' && j < n)
	{
		tmp[j] = a[i];
		i--;
		j++;
	}
}

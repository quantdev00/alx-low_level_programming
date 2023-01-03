#include "main.h"

/**
 * print_array - print the sign
 * @a: the array
 * @n: the number
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i == n)
			printf("%d", a[n]);
		else
			printf("%d, ", a[i]);
	printf("\n");
}

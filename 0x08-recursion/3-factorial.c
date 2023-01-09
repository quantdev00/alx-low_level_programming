#include "main.h"

/**
 * factorial - return n factorial
 * @n: num to use
 *
 * Return: the total result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

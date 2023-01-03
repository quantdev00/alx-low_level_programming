#include "main.h"
#include <string.h>
/**
 * puts_half - gonna print the half of string
 * @str: the string to test
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int n_half = (n) / 2;
	int i;

	if (n_half % 2 == 0)
	{
		for (i = n_half + 1; i < n; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = n_half; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

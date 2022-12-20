#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - reset tthe number to 98
 * @str: the number to use
 * Return: 0
 */
void _puts(char *str)
{
	long int i;
	for (i = 0; i <= strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	_putchar('\n');
}

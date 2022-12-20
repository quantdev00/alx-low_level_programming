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
	char myChar = *str;

	printf("%c", *str);
	_putchar('\n');
}

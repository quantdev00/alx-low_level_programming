#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reset tthe number to 98
 * @s: the number to use
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		fprintf(stdout, "%c", s[i]);
	}
	putchar('\n');
}

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
	int length = strlen(str);

	for (i = 1; i <= length; i++)
	{
		fprintf(stdout, "%c", str[i]);
	}
	fprintf(stdout, "\n");
}

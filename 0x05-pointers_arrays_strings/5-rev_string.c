#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reset tthe number to 98
 * @s: the number to use
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	int val = length - 1;

	for (i = 0; val >= 0 && i < val; val--, i++)
	{
		s[i] = s[val];
	}

	putchar('\n');
}

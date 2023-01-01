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

	for (i = s[length - 1]; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}

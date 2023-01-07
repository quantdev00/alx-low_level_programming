#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *string_toupper - reversing the received array
 * @str: the char
 *
 * Return: 0;
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		toupper(str[i]);
		i++;
	}
}

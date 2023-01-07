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
	int j = 0;
	char temp[50];

	while (str[i] != '\0')
	{
		temp[j] = toupper(str[i]);
		i++;
		j++;
	}
	i = 0;
	while (temp[i] != '\0')
	{
		str[i] = temp[i];
		i++;
	}
	return (str);
}

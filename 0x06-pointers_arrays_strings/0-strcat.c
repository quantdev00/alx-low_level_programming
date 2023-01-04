#include "main.h"

/**
 * *_strcat - concatenate strings
 * @dest: string to concat
 * @src: file
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char tmp[100];
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		tmp[j] = dest[i];
		i++;
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		tmp[j] = src[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	i = 0;

	while (tmp[i] != '\0')
	{
		dest[i] = tmp[i];
		i++;
	}
	return (dest);
}

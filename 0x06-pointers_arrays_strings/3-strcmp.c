#include "main.h"
#include <string.h>

/**
 * _strcmp - strin compare
 * @s1: str 1
 * @s2: str 2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int ln1 = strlen(s1);
	int ln2 = strlen(s2);
	char last_char1 = s1[ln1 - 1];
	char last_char2 = s2[ln2 - 1];

	if (ln1 < ln2)
		last_char1 = '0';
	else if (ln2 < ln1)
		last_char2 = '0';
	int result = last_char1 - last_char2;

	if (s1 < s2)
		return (result);
	else if (s1 > s2)
		return (result);
	else if (s1 == s2)
		return (0);
}

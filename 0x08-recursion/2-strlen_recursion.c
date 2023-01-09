#include "main.h"

/**
 * _strlen_recursion - function to return the length of string
 * @s: the string to test
 *
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}

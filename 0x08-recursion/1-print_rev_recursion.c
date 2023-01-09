#include "main.h"
/**
 * _puts_recursion - put with recursion
 * @s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}

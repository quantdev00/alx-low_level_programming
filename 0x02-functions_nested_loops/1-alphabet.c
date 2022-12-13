#include "main.h"
#include <stdio.h>

/**
 * main - prints a to z'
 *
 * Return: 0;
 */
int main(void)
{
	
	void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
	print_alphabet();
	return (0);
}

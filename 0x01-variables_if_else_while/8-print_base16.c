#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');
	}
	for (j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

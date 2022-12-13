#include <stdio.h>
#include <stdlib.h>
/**
* main - Print 2 different number
*
* Return: Always 0
*/

int main(void)
{
	int i, j;
	for(i = 0;;)
	{
		for(j = 0; j <= 9; j++)
		{	
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if(j == 9)
			{
				i = 1;
				j = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}

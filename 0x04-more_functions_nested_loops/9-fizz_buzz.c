#include <stdio.h>
#include <stdlib.h>

/**
 * main - main pgm
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ( i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
}

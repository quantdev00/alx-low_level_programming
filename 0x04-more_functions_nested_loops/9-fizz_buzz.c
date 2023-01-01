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
			printf("FizzBuzz");
			printf("\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf("\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf("\n");
		}
		else
		{
			printf("%d", i);
			printf("\n");
		}
	}
	return (0);
}

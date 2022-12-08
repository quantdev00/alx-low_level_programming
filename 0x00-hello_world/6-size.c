#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char value1;
	int value2;
	long int value3;
	long long int value4;
	float value5;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(value1));
	printf("Size of an in: %lu byte(s)\n", (unsigned long)sizeof(value2));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(value3));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(value4));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(value5));
	return (0);
}

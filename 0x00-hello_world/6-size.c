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

	printf("Size of a char: %ld byte(s)\n", sizeof(value1));
	printf("Size of an int: %ld byte(s)\n", sizeof(value2));
	printf("Size of a long int: %ld byte(s)\n", sizeof(value3));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(value4));
	printf("Size of a float: %ld byte(s)\n", sizeof(value5));
	return (0);
}

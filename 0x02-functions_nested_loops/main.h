#include <unistd.h>

int _putchar(char c);

/* 
 * The actual _putchar function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

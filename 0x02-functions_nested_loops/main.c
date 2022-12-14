#include "1-alphabet.c"
#include "_putchar.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"

int main(void)
{
	print_alphabet_x10();
	printf("Testing is lower case\n");
	_islower('H');
	_islower('o');
	_islower(108);	
	printf("\n");
	return (0);
}

#include "1-alphabet.c"
#include "_putchar.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"

int main(void)
{
	print_alphabet_x10();
	printf("Testing is lower case\n");
	int r;
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
		
	printf("\n");
	return (0);
}

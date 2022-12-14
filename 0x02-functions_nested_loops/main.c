#include "1-alphabet.c"
#include "_putchar.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "4-isalpha.c"

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
	printf("-----Is ALPHA------\n");
	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

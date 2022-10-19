#include "main.h"

/**
 * print_alphabet - print times in alpahabet in lowercase followed by new line
 *
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

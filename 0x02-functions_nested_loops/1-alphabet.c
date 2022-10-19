#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 */

void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')

	{
		_putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}

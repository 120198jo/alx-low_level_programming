#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int j;

	j = 0;

	while (j < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alpha);
			alph++;

	}
	_putchar('\n');
	j++;
	}
}

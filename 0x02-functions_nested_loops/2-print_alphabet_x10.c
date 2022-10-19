#include "main.h"

/**
 * print_alphabet_x10 - print times in alpahabet in lowercase
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int j;

	j = 0;

	while (j < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;

	}
	_putchar('\n');
	j++;
	}
}

#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, b, l;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for(b = 0; b <= n; b++)
			{
				l = b * i;

				if (b == 0)

				{
					_putchar(l + '0');
				} 

				else if (l < 10 && j != 0)

				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((l / 10 + '0');
							_putchar((l % 10) + '0')
							} 

							else if (l >= 10 && l < 100)
							{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
							_putchar((l / 10) + '0');
							_putchar((l % 10) + '0')
							}

							else if (l >= 100)
							{
							_putchar(',');
							_putchar(' ');
							_putchar((l / 100) + '0');
							_putchar(((l / 10) % 10 + '0');
									_putchar((l % 10) + '0');
									}
									}
									_putchar('\n');
									}
									}
									}

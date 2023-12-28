#include "main.h"

/**
 * times_table - void
 * @n: the character checked
 * Description: prints the 9 times table
 * Return: 0
 */

void print_number(int n)
	{
	if (n < 10)
		{
		_putchar(' ');
		_putchar('0' + n);
		}
	
	else
		{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		}
	}

void times_table(void)
	{
	int row, col;

	for (row = 0; row <= 9; row++)
		{
		for (col = 0; col <= 9; col++)
		{
			int result = row * col;
				print_number(result);

			if (col < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
		}
		_putchar('\n');
		}
	}

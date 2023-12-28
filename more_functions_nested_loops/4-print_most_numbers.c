#include "main.h"

/**
 * print_most_numbers - void
 * Description: prints the numbers from 0 to 9, Do not print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		if (numbers != 2 && numbers != 4)
		{
			_putchar(numbers + '0');
		}
	}
	_putchar('\n');
}

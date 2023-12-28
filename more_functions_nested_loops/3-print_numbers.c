#include "main.h"

/**
 * print_numbers - void
 * Description: prints the numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}

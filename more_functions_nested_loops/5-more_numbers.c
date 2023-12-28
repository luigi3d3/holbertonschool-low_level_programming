#include "main.h"

/**
 * more_numbers - void
 * Description: prints 10 times the numbers, from 0 to 14
 * Return: 0
 */

void more_numbers(void)
	{
	int rep, num;

	for (rep = 0; rep < 10; rep++)
		{
		for (num = 0; num <= 14; num++)
			{
			if (num > 9)
				{
				_putchar('0' + (num / 10));
				}
			_putchar('0' + (num % 10));
			}
		_putchar('\n');
		}
	}

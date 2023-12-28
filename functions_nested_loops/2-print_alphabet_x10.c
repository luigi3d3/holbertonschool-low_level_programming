#include "main.h"

/**
 * print_alphabet_x10 - void
 * Description: prints 10 times alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}

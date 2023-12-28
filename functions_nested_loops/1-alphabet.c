#include "main.h"

/**
 * print_alphabet - void
 * Description: task lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}

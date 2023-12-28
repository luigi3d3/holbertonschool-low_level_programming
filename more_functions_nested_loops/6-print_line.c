#include "main.h"

/**
 * print_line - int
 * @n: checked
 * Description: draws a straight line in the terminal
 * Return: 0
 */

void print_line(int n)
	{
	if (n <= 0)
		{
		_putchar('\n');
		}
	else
		{
		while (n > 0)
			{
			_putchar('_');
			n--;
			}
		_putchar('\n');
		}
	}

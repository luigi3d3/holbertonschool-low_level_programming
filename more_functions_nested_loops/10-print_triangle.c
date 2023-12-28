#include "main.h"

/**
 * print_triangle - int
 * @size: checked
 * Description: prints a triangle
 * Return: 0
 */

void print_triangle(int size)
{
	if (size <= 0)
		{
		_putchar('\n');
		}
	else
		{
		int i, j;

	for (i = 0; i < size; i++)
		{
		for (j = size - 1; j > i; j--)
			{
			_putchar(' ');
			}

		for (j = 0; j <= i; j++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
		}
}

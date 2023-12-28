#include "main.h"

/**
 * _puts_recursion - char
 * @s: checked
 * Description: Write a function that prints a string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		{
		_putchar('\n');
		return;
		}

	_putchar(*s);
	_puts_recursion(s + 1);
}

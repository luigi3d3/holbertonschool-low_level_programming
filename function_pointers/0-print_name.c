#include <stdio.h>

/**
 * print_name - char
 * @name: the character checked
 * @f: the character checked
 * Description: check
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}

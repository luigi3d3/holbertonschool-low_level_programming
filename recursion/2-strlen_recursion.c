#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - char
 * @s: the character checked
 * Description: Write a function that returns the length of a string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

#include "main.h"

/**
 * _isalpha - int
 * @c: the character checked
 * Description: checks for alphabetic character
 * Return: 1 if c is letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

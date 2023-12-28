#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * _sqrt_recursion - int
 * @n: checked
 * Description: Write a function returns the natural square root of a number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}

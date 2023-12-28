#include "main.h"

/**
 * _abs - int num
 * @num: to be checked
 * Description: computes the absolute value of an integer
 * Return: num
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}

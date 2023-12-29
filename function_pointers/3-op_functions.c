/**
 * op_add - addtion
 * op_sub - sunstraction
 * op_mul - multiplyes
 * op_div - divide
 * op_mod - divide having de residuos
 * @a: number
 * @b: numbe
 * Return: different
 */

#include "3-calc.h"

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: number
 * @b: number
 * Return: substracion of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: number
 * @b: number
 * Return: multiply of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide integers
 * @a: number
 * @b: number
 * Return: substracion of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - subtraction
 * @a: number
 * @b: number
 * Return: substracion of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

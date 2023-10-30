/**
 * _atoi - Escribe una función que convierta
 * una cadena en un número entero
 * @s: es la variable con la recorre la cadena
 * Descrition: Convierte una cadena en numeros enteros
 * Return: result * sign
 */

#include "main.h"
#include <stdio.h>
#include <limits.h>

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return result * sign;
}

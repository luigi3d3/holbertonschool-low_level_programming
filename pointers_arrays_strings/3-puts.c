/**
 * _puts - Escribe una función que imprima una cadena,
 *  seguida de una nueva línea
 *  @str: toma un puntero a una matriz de caracteres como argumento.
 *  Description: un string lo convierte en texto impreso
 *  Return: 0
 */

#include "main.h"
#include <stdio.h>

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

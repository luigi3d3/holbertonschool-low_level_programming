/**
 * puts2 - Escribre una funcion que impre una
 * cadena cada dos valores
 * @str: toma un puntero a una matriz de caracteres
 * como argumento.
 * Descrition: imprime una cadena cada dos valores
 * Return: 0
 */


#include "main.h"
#include <stdio.h>


void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}

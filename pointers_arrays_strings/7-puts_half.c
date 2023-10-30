/**
 * puts_half - Escribe una funcion que imprima
 * la mitad de adelante
 * @str: toma un puntero a una matriz de caracteres como argumento.
 * Description: imprime la mitad de la cadena
 * Return: 0
 */

#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
	int length = 0;
	int medio;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	medio = (length - 1) / 2 + 1;
	for (i = medio; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

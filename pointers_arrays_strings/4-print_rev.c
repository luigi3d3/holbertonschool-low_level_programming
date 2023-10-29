/**
 * print_rev -Escribe una función que imprima una cadena, al revés.
 * @s: es la variable con la que va a recorre la cadena
 * Descrition: imprime una cadena al reves
 * Return: cadena inversa
 */

#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

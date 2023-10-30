/**
 * print_array - Escribe una cadena de apartir de un array
 * @a : toma un puntero a una matriz de caracteres como argumento.
 * @n : es la cantidad de elementos que hay dentro de un array
 * Descrition: imprime un array en una cadena
 * Return: 0
 */

#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

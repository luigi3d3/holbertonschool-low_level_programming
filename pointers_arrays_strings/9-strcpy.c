/**
 * *_strcpy - Escribe una función que copie la cadena apuntada por src
 * @dest: es el puntero de destino de la cadena
 * @str: es el puntero de origen de la cadena
 * Description: genera una copia de cadena
 * Return: finally_dest
 */

#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	char *finally_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return finally_dest;
}

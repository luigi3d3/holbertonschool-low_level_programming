/**
 * _strlen - medir devuelve la longitud de una cadena
 * @s: es la variable con la que va recorre la cadena
 * Descrition: con el bucle while, recorre la cadena hasta encontrar el terminal null
 * Return: length
 */

#include "main.h"

int _strlen(char *s){
	int length = 0;

	while(*s != '\0'){
		length++;
	}
	return length;
}

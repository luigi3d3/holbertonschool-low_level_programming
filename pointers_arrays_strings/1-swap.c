/**
 * swap_int intercambia valores a travez de punteros
 * el valor de la primera variable es guardada en el auxiliar
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

/**
 * swap_int - intercambia valores a travez de punteros
 * @a: hace intercambio por puntero con el aux
 * @b: hace intercambio por puntero
 * Description: el valor de la primera variable es guardada en el auxiliar
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

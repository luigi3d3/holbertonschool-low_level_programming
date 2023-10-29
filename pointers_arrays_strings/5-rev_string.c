/**
 * rev_string -Escribe una funcion que imprime una cadena y al mismo una al reves
 * @s : es la variable con la que va a recorrer la cadena
 * Descrition: imprime una cadena y tambien una al reves
 * Return: cadena, cadena inversa
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

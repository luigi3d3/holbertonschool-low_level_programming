#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - char
 * @c: the character checked
 * @size: the character checked
 * Description: function creates array of chars,initializes with specific char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int contador;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (contador = 0; contador < size; contador++)
	{
		ptr[contador] = c;
	}
	return (ptr);

}

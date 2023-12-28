#include "main.h"

/**
 * *_strcpy - char
 * @dest: the character checked
 * @src: checked
 * Description: Write a function that copies the string pointed
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

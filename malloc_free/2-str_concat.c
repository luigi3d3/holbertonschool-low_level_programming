#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates
 * @s1: parameter
 * @s2: parameter 1
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = (s1 != NULL) ? (int)strlen(s1) : 0;
	int s2_len = (s2 != NULL) ? (int)strlen(s2) : 0;
	int i, j;
	char *concatenated = (char *)malloc(s1_len + s2_len + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; i < s1_len; i++)
		{
			concatenated[i] = s1[i];
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; j < s2_len; j++)
		{
			concatenated[s1_len + j] = s2[j];
		}
	}

	concatenated[s1_len + s2_len] = '\0';
	return (concatenated);
}

#include "main.h"
#include "stdio.h"
#include <stdlib.h>

/**
 * print_to_98 - int
 * @n: the character checked
 * Description: prints all natural numbers from n to 98
 * Return: 0
 */

void print_to_98(int n)
	{
	int i;

	if (n <= 98)
		{
		for (i = n; i <= 98; i++)
			{
			printf("%d", i);
			if (i < 98)
				{
				printf(", ");
				}
			}
		}
	else
	{
		for (i = n; i >= 98; i--)
			{
			printf("%d", i);
			if (i > 98)
				{
				printf(", ");
				}
			}
	}
	printf("\n");
	}

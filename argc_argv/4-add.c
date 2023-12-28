#include <stdio.h>
#include <stdlib.h>

/**
 * main - int
 * @argc: checked
 * @argv: checked
 * Description: Write a program that adds positive numbers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int suma = 0;
	int i;

	if (argc < 2)
		{
		printf("0\n");
		return (0);
		}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;
		int num = 0;

		while (arg[j])
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (arg[j] - '0');
			j++;
		}
		suma += num;
	}

	printf("%d\n", suma);
	return (0);
}

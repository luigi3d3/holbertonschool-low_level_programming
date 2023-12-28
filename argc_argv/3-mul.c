#include <stdio.h>
#include <stdlib.h>

/**
 * main - int
 * @argc: checked
 * @argv: checked
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int resultado = num1 * num2;

		printf("%d\n", resultado);
		}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

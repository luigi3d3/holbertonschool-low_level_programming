#include <stdio.h>

/**
 * main - int
 * @argc: checked
 * @argv: checked
 * Description: Write a program prints the number of arguments passed into it
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
		{
		printf("%d\n", argc - 1);

		return (0);
		}

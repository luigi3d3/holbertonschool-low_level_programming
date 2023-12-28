#include <stdio.h>

/**
 * main - int
 * @argc: checked
 * @argv: checked
 * Description: Write a program that prints its name
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
	{
	printf("%s\n", argv[0]);
	return (0);
	}

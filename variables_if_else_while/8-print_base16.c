#include <stdio.h>

/**
 * main - tasks
 * Description: task
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}

	for (x = 0; x < 6; x++)
	{
		putchar('a' + x);
	}

	putchar('\n');

	return (0);
}

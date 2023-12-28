#include <stdio.h>

/**
 * main - tasks
 * Description: task
 * Return: 0
 */

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');

	return (0);
}

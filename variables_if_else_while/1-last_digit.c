#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - one
 * Description: task1
 * Return: 0
 */

int main(void)
{
	int n;
	int lastDigit;
	char myString[50];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	strcpy(myString, "Last digit of");

	if (lastDigit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", myString, n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%s %d is %d and is 0\n", myString, n, lastDigit);
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", myString, n, lastDigit);
	}
	return (0);
}

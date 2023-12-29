#include <stddef.h>

/**
 * int_index - int
 * @array: check array
 * @size: check size
 * @cmp: check cmp
 * Description: check
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
		{
				return (i);
		}
		}
	}
	return (-1);
}

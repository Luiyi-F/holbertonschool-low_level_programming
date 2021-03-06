#include "function_pointers.h"

/**
 *int_index - return index
 *@array: pointer array
 *@size: size of array
 *@cmp: pointer fucntion
 *
 *Return: return index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

	}
	return (-1);
}

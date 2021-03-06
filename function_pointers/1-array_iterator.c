#include "function_pointers.h"

/**
 *array_iterator - iterator array
 *@array: pointer array
 *@size: size of array
 *@action: pointer function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i = 0;

	if (action != NULL && array != NULL)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
}

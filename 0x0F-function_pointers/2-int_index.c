#include "function_pointers.h"

/**
 * int_index -used to  return index place if comparison = true, else -1
 * Return: Zero
 */

int int_index(int *array, int size, int (*chuks)(int))

{
	int i;

	if (array == NULL || size <= 0 || chuks == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (chuks(array[i]))
			return (i);
	}
	return (-1);
}

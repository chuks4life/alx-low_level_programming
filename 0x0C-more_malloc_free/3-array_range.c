#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *point;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	point = malloc(sizeof(int) * size);

	if (point == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		point[i] = min++;

	return (point);
}

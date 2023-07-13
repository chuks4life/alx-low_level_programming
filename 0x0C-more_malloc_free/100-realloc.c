#include <stdlib.h>
#include "main.h"

/**
 * realloc - reallocates a memory block using malloc and free
 * pointer to the newly allocated memory block
 */
void *_realloc(void *point, unsigned int old_size, unsigned int new_size)
{
	char *point1;
	char *old_point;
	unsigned int i;

	if (new_size == old_size)
		return (point);

	if (new_size == 0 && point)
	{
		free(point);
		return (NULL);
	}

	if (!point)
		return (malloc(new_size));

	point1 = malloc(new_size);
	if (!point1)
		return (NULL);

	old_point = point;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			point1[i] = old_point[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			point1[i] = old_point[i];
	}

	free(point);
	return (point1);
}

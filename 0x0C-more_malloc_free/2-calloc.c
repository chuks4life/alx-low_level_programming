#include <stdlib.h>
#include "main.h"

/**
 * memset - fills memory with a constant byte
 * Return: pointer to the memory area s
 */
char memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * calloc - allocates memory for an array
 * Return: pointer to allocated memory
 */
void calloc(unsigned int nmemb, unsigned int size)
{
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(size * nmemb);

	if (point == NULL)
		return (NULL);

	_memset(point, 0, nmemb * size);

	return (point);
}

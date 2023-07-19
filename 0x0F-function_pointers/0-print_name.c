#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - print name using pointer to function
 * Return: 0
 **/

void print_name(char *f_name, void (*f)(char *))

{
	if (f_name == NULL || f == NULL)
		return;

	f(f_name);
}

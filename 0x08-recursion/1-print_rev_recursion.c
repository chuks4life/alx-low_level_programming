#include "main.h"
/**
 * _print_rev_recursion -this is used to print astring in reverser order
 * return: *s
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

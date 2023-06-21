#include "main.h"
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: void.
  */
void print_alphabet_x10(void)
{
	int i;
	char boo;

	for (i = 0; i < 10; ++i)
	{
		for (boo = 'a'; boo <= 'z'; boo++)
		{
			_putchar(boo);
		}
		_putchar('\n');
	}
}

#include <stdio.h>

/** This is used to print letters of alphabet in lower
 *  case a to z and in upper case A to Z 
 *  */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	putchar('\n');

	return (0);
}

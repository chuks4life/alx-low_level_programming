#include <stdio.h>
/**
 * this code is used to print size of types 
 * return 0
 */

int main(void)

{	
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of short: %i byte(s)\n", sizeof(short));
	printf("size of long: %i byte(s)\n", sizeof(long));
	printf("size of long long: %i byte(s)\n", sizeof(long long));
	printf("size of float: %i byte(s)\n", sizeof(float));
	printf("size of double: %i byte(s)\n", sizeof(double));
	printf("size of long double: %i byte(s)\n" sizeof(long double));

	return(0);

}

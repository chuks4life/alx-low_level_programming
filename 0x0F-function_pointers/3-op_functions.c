#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This is used to return the sum of two numbers.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - This is used to return the difference of two numbers.
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul -Used to return the product of two numbers.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - Used  to return the division of two numbers.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - Used to return the remainder of the division of two numbers.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)

{
	return (a % b);
}


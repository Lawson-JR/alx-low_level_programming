#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: string to calculate the factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if(n == 1)
		return 1;
	return n * factorial(n -1)
}

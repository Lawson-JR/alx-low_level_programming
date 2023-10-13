#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list cr;

	va_start(cr, n);

	for (i = 0; i < n; i++)
		total += va_arg(cr, int);

	va_end(cr);

	return (total);
}

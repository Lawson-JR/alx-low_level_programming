#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return(0);

	int i, total;
	va_list cr;

	va_start(i, total);
	total = 0;
	for (i = 0, i < n; i++)
	total += va_agr(cr, int);

	va_end(cr);

	return (total);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints strings & new line at the end
 * @separator: string
 * @n: string of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, char *));

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(ap);
}

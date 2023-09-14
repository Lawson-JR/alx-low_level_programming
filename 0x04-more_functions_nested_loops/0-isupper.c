#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry Point.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase and 0 if lowercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else	
    	return (0);
}

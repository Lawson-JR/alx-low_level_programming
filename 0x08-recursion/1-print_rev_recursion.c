#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
	int length = strlen(*s);

    	for (int i = length - 1; i >= 0; i--) {
        	printf("%c", *s[i]);
    	}

    	return 0;
}

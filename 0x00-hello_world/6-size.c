/* This is my Size.c file*/

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int me;
	
	long int us;
	
	char we;

	float our;

	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(me));
	
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(us));
	
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(we));

	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(our));

	return (0);
}

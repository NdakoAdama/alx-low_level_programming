#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - creates a fxn that allocates memory 
 * using malloc
 * @b: input.
 * Return: Output.
 */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}

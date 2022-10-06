#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - creates a fxn that allocates 
 * memory using malloc
 * @b: input.
 * Return: Output.
 */
void *malloc_checked(unsigned int b)
{
	void *g = malloc(b);

	if (g == NULL)
	{
		exit(98);
	}
	return (g);
}

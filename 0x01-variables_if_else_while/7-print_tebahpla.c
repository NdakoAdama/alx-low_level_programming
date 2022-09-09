#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Descript:A C program that prints the lowercase alphabet in reverse, 
 * it is executed.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}

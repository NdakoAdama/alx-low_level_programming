#include <stdio.h>
/**
 * main - print program that prints the alphabet in lowercase, followed by a new line
 *
 * Description: print alphabets in lower case
 *
 * it is executed.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}

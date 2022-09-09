#include <stdio.h>
/**
 * main - A program that prints single digits 0-9
 *
 * Description:A program that prints single digits 0-9
 *
 * it is executed.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}

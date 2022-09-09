#include <stdio.h>
/**
 * main - A program that print single digit numbers
 *
 * Description:A program that print single digit numbers
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


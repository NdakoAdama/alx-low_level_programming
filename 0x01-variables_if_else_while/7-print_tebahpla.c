#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description:print the lowercase alphabet in reverse 
 * it is executed.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;
77
	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}

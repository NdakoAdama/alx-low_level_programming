#include"main.h"

/**
 * print_alphabet_x10 - function that will display the alphabet 10 times
 * from a - z
 */

void print_alphabet_x10(void)
{
	int line az;

	for (line = 0; line <= 9; ++line)
	{
		for (az = 'a'; az <= 'z'; ++az)
			_putchar(az);
		_putchar('\n');
	}
}

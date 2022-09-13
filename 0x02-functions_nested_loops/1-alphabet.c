#include"main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a - z
 */

void print_alphabet(void)
{
	int az;
	for (az = 'a'; az <= 'z'; ++az)
		_putchar(az);
	_putchar('\n');
}

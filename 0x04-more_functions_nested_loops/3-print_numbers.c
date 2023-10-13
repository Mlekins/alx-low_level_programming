#include "main.h"

/**
 * print_numbers- a function that prints numbers 0 to 9
 *
 * 	using _putchar twice
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

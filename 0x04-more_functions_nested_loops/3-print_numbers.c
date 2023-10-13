#include "main.h"

/**
 * print_numbers- a function that prints numbers 0 to 9
 *
 * 	using _putchar twice
 */

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);

	_putchar('\n');
}

#include "main.h"

/**
 * print_most_numbers- a function that prints numbers 0 - 9 apart from 2 & 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		while (i != 2 || i != 4)
		{
			continue;
		}

		_putchar(i);
	}

	_putchar('\n');
}

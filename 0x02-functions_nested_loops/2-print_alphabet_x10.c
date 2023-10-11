#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		int j;

		for (j = 'a'; j = 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
	return (0);
}

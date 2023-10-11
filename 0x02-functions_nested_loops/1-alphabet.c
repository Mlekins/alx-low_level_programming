#include "main.h"

/**
 * main - using header files
 *
 * Description: using function prototype
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	putchar('\n');
}

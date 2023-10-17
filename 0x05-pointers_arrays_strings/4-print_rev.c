#include "main.h"

/**
 * print_rev- a function that prints a string in reverse followed by a new line
 * @s: string input
 */

void print_rev(char *s)
{
	int rev;

	/*finds the length of string without null character*/
	for (rev = 0; s[rev] != '\0'; ++rev)
		;

	/*print char from the last indec as you decrement*/
	for (--rev; rev >= 0; --rev)
		_putchar(s[rev]);
	_putchar('\n');
}

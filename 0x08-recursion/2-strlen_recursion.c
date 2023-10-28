#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: The string considered
 *
 * Return: the number of characters in the string
 *	and 0 if empty
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

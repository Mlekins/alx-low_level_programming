#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte @b
 *
 * @s: the pointer that points to @n
 *
 * @b: the constant byte
 *
 * @n: number of bytes pointed to by @s
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}

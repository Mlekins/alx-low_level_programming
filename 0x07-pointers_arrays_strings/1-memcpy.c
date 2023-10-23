#include "main.h"

/**
 * _memcpy - a function that copies @n bytes from memory area @src to memory
 * 			@dest
 * 
 * @n: bytes from memory area @src
 *
 * @src: memory area
 *
 * @dest: another memory area
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

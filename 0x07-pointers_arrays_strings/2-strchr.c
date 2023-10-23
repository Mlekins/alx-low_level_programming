#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 *
 * @s: the string where character @c is located
 *
 * @c: the first occurence of the character in the string
 *
 * Return: a pointer to the first occurence of @c in the string @s
 *	or NULL if @c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}

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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

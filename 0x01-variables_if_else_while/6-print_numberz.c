#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Numberz.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar((char)x);
	}
	putchar('\n');
	return (0);
}

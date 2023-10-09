#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *
 * Return: This time we return an error 1.
 */

int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora korpar, 2015-10-19\n",
		59);

	return (1);
}

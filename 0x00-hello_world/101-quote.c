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
	char quo[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}

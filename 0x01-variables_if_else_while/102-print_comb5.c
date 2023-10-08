#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Soft is eating the world
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

    int i, j;

    for (i = 0; i <= 99; i++) 
    {
        for (j = i + 1; j <= 99; j++) 
	{
            // Print the first number
            putchar('0' + i / 10); // Print the tens digit
            putchar('0' + i % 10); // Print the ones digit

            // Print a space to separate the two numbers
            putchar(' ');

            // Print the second number
            putchar('0' + j / 10); // Print the tens digit
            putchar('0' + j % 10); // Print the ones digit

            // Print a comma and space if it's not the last combination
            if (i != 98 || j != 99) 
	    {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}


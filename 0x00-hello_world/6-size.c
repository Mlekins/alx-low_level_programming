#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to get various types sizes
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{

printf("Size of a char: %d byte(s)\n", sizeof(char));
prinf("Size of an int: %d byte(s)\n", sizeof(int));
prntf("Size of a double: %d byte(s)\n", sizeof(double));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));

	return(0);
}

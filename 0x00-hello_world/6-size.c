#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: using sizeof to get various types sizes
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	prinf("Size of an int: %lu byte(s)\n", sizeof(int));
	prntf("Size of a double: %lu byte(s)\n", sizeof(double));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}

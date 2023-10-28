#include "main.h"

/**
 * _pow_recursion - a function that returns the power of x to y
 *
 * halfpower - the function to round up both int
 *
 * @x: the number to be raised
 *
 * @y: the power
 *
 * Return: -1 if y < 0, 1 if y = 0, and x if y = 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else
	{
		int halfpower = _pow_recursion(x, y / 2);

		if (y % 2 == 0)
			return (halfpower * halfpower);

		else
			return (x * halfpower * halfpower);
	}

	return (0);
}

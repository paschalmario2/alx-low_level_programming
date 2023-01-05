#include "main.h"
/**
 * factorial: the multiplication of a number minus the number
 * @n: number to find the factorial of.
 * Return: factorial of number
 * -1 if x < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

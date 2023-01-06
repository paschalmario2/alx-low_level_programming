#include "main.h"

/**
 *_abs - helps to find the absolute value
 * @n: the number meant to be found the absolute value
 * Return: 1 if positve , -1 if negative
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (1);
}

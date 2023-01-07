#include "main.h"

/**
 * _isdigit - this to check for digits
 * @c: the number to be checked
 * Return: 1 if a number but 0 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * print_sign - checks the sign of the number
 * @n: number to be checked
 * Return: 1 if positive , 0 if neutral,
 * and -1 if negative
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
return (0);
}

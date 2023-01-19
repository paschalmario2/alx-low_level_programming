#include "main.h"
#include <stdio.h>

/**
 * print_line -a function that prints a line
 * @n: the number times the _ charaacter is to be printed
 * Return: 0 if the number is less than n
 */
void print_line(int n)
{
	if (n <= 0)
	{
		return ('\n');
	}
	else
	{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	}
}

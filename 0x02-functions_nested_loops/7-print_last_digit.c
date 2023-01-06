#include "main.h"

/**
 * print_last_digit - It prints the last digit of a number
 * @n: the number to ber found
 * Return: always 1
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}

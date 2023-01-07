#include "main.h"

/**
 * print_numbers - to print numbers
 * Return: always 1
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

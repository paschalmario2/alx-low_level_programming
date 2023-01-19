#include "main.h"

/**
 * more_numbers - prints numbers from one to 14
 * Return: Always 1
 */
void more_numbers(void)
{
	int numbers, row, tens, units;

	for (row = 1; row <= 10; row++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			tens = numbers / 10;
			units = numbers % 10;
			if (numbers > 9)
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			_putchar('\n');
		}
	}

#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of the string.
 * @s: the string is measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		return (1 + _stren_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

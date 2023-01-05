#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of the string.
 * @s: the string is measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

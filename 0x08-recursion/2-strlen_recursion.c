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
		len++;
		len += _strlen_recursion(s + 1);
	}


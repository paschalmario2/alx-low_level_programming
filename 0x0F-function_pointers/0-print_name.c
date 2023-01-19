#include <stdlib.h>
#include "functions_pointer.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

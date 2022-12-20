#include "main.h"
/**
 * swap-init - function that swaps the value
 *  of two integers
 * @a: first entry
 * @b: second entry
 */
void swap_int(int *a, int *b)
{
int changed;
changed = *a;
*a = *b;
*b = changed;
}

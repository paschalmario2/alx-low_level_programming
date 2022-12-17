#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: second integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && b > c)
{
largest = a;
}
	else if (a > b && c > a)
{
	largest = c;
}
else if (b > c)
}
largest = b;
}
else
{
	 largest = c;
}
return (largest);

}


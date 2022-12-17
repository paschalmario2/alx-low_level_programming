#include <stdio.h>

/**
 * main - cause of infinity loop
 * Return: 0
 */
int main(void)

	int z;

	printf("Infinite loop incoming :(\n");

	z = 0;
	/*
	 * while (z < 10)
	 * {
	 * putchar(z);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);

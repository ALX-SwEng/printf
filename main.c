#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	long res = INT_MAX;

	len = _printf("%i", 10000);
	len2 = printf("%i\n\n", 10000);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n\n");
		fflush(stdout);
		return (1);
	}

	res *= 2;
	len = _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	len2 = printf("1111111111111111111111111111111 + 1111111111111111111111111111111 = 11111111111111111111111111111110\n\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}

#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("% i + % i = % i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("% i + % i = % i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	

	return (0);
}

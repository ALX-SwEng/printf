#include "main.h"

/**
 * printf_di - print a formatted number.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */
unsigned int printf_di(va_list val, int counter)
{
	long int num = va_arg(val, int);
	unsigned long int revNum;
	int i = 0, j = 0, len;
	char *table;

	revNum = num;
	while (revNum /= 10)
		++len;

	table = malloc(sizeof(char *) * len);
	if (num == 0)
	{
		_putchar('0');
		counter++;		
	}
	else if (num < 0)
	{
		_putchar('-');
		revNum = -num;
		counter++;
	}
	else
		revNum = num;

	while (revNum != 0)
	{
		table[j++] = (revNum % 10) + '0';
		revNum /= 10;
		i++;
	}

	while (--i >= 0)
	{
		_putchar(table[i]);
		counter++;
	}

	free(table);
	return (counter);
}


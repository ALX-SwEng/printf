#include "main.h"

/**
 * printf_di - print a formatted number.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */
unsigned int printf_di(va_list val, int counter)
{
	long int num = va_arg(val, long int);
	int i = 0, j = 0;
	char table[41];

	if (!num)
	{
		_putchar('0');
		return (counter++);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		counter++;
	}

	while (num != 0)
	{
		table[j++] = (num % 10) + '0';
		num /= 10;
		i++;
	}

	while (--i >= 0)
	{
		_putchar(table[i]);
		counter++;
	}

	return (counter);
}


#include "main.h"

/**
 * printf_di - print a formatted number.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */
unsigned int printf_di(va_list val, int counter)
{
	int long num = va_arg(val, long int);
	unsigned long int revNum;
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

	return (counter);
}


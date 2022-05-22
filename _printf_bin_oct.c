#include "main.h"

/**
 * printf_b - print a formatted binary.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */

unsigned int printf_b(va_list val, int counter)
{
	long int binary = va_arg(val, unsigned int);
	int i = 0, j = 0;
	char table[51];

	counter = 0;
	if (!binary)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		while (binary)
		{
			table[j++] = (binary % 2) + '0';
			binary /= 2;
			i++;
		}

		while (--i >= 0)
		{
			_putchar(table[i]);
			counter++;
		}
	}

	return (counter);
}

/**
 * printf_o - print a formatted binary.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */

unsigned int printf_o(va_list val, int counter)
{
	long int octal = va_arg(val, unsigned int);
	int i = 0, j = 0;
	char table[51];
	counter = 0;

	if (!octal)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		while (octal)
		{
			table[j++] = (octal % 8) + '0';
			octal /= 8;
			i++;
		}

		while (--i >= 0)
		{
			_putchar(table[i]);
			counter++;
		}
	}

	return (counter);
}

/**
 * printf_x - print a formatted hexadecimal.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */

unsigned int printf_x(va_list val, int flag)
{
	long int hexa = va_arg(val, unsigned int);
	int i = 0, j = 0, counter = 0;
	char table[51];
	char *upper = "ABCDEF", *lower = "abcdef";
	int hexadec[] = {10, 11, 12, 13, 14, 15};

	if (!hexa)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		while (hexa)
		{
			table[j++] = (hexa % 16) + '0';
			hexa /= 16;
			i++;
		}

		while (--i >= 0)
		{
			if (table[i] - '0' < 10)
				_putchar(table[i]);
			for (j = 0; j < 6; j++)
			{
				if (flag == 1 && table[i] == hexadec[j])
				{
					_putchar(upper[j]);
					break;
				}
				else
				{
					_putchar(lower[j]);
					break;
				}
			}
			counter++;
		}
	}

	return (counter);
}


/**
 * printf_X - call a function that print formatted hexadecimal.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */

unsigned int printf_X(va_list val, int flag)
{
	flag = 1;
	return (printf_x(val, flag));	
}

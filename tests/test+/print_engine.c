#include "main.h"

/**
 * print_str - prints a string to stdout
 * @list: the va_list argument in which the string will come from
 *
 * Return: the amount of bytes printed
 */

int print_str(va_list list)
{
	int i = 0, byte = 0;
	char *str;

	str = va_arg(list, char *);
	if (str != NULL)
	{
		while (str[i])
		{
			_putchar(str[i]);
			byte++;
			i++;
		}
	}

	return (byte);
}

/**
 * print_int - prints an int to stdout
 * @list: the va_list argument in which the string will come from
 *
 * Return: the amount of bytes printed
 */

int print_int(va_list list)
{
	int num, byte = 0;

	num = va_arg(list, int);
	if (num == 0)
	{
		_putchar('0');
		byte++;
	}
	else
	{
		while (num != 0)
		{
			_putchar(num % 10);
			byte++;
			num = num / 10;
		}
	}
	return (byte);
}

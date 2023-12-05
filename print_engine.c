#include "main.h"

/**
 * print_str - prints a string to stdout
 * @str: the string to be printed
 *
 * Return: the amount of bytes printed
 */

int print_str(char *str)
{
	int i = 0, byte = 0;

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
 * @num: the int to be printed
 *
 * Return: the amount of bytes printed
 */

int print_int(int num)
{
	int byte = 0, digit;

	if (num == 0)
	{
		_putchar('0');
		byte++;
	}
	else
	{
		while (num != 0)
		{
			digit = num % 10;
			_putchar(digit + 48);
			byte++;
			num = num / 10;
		}
	}
	return (byte);
}

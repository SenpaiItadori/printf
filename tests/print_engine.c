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
	int digit, count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = num * -1;
	}

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	if (num / 10)
	{
		print_int(num / 10);
	}
	digit = num % 10;
	putchar(digit + 48);
	count++;

	return (count);
}

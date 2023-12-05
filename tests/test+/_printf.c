#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string composed of zero ir more directives
 *
 * Return: the number of chars printed to stdout
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, byte = 0;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && check(format, i) == 0)
		{
			byte = byte + handle(args, format[i + 1]);
			i++;
		}
		else
		{
			_putchar(format[i]);
			byte++;
		}
		i++;
	}

	return (byte);
}

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
		if (format[i] == '%' && check(format, i + 1) == 0)
		{
			switch (format[i + 1])
			{
				case 'c':
					byte = byte + _putchar(va_arg(args, int));
					break;
				case '%':
					byte = byte + _putchar(format[i]);
					break;
				case 's':
					byte = byte + print_str(va_arg(args, char *));
					break;
				case 'd':
					byte = byte + print_int(va_arg(args, int));
					break;
				case 'i':
					byte = byte + print_int(va_arg(args, int));
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			byte++;
		}
		i++;
	}

	va_end(args);
	return (byte);
}

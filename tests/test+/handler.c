#include "main.h"

/**
 * handle - handles the fuction to call for a corresponding specifier
 *
 * Return: number of bytes printed
 */

int handle(va_list list, char symbol)
{
	int i = 0;
	Node form[3];

	form[0].fmt = 's';
	form[0].f = print_str(list);
	form[1].fmt = 'd';
	form[1].f = print_int(list);
	form[2].fmt = 'i';
	form[2].f = print_int(list);

	if (symbol == '%')
	{
		_putchar('%');
		return (1);
	}
	while (form[i].fmt)
	{
		if (form[i].fmt == symbol)
		{
			return (form->f(list));
		}
		i++;
	}

	return (0);
}

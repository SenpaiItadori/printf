#include "main.h"

/**
 * get_size - calculates the size to cast the arg
 * @format: formatted string in whcich to print the args
 * @i: List of args to be printed
 * 
 *
 * Return: precision
 */

int get_size(const char *format, int *i)
{
	int k = *i + 1;
	int size = 0;

	if (format[k] != 'l')
		size = S_LONG;
	else if (format[k] == 'h')
		size = S_SHORT;
	
	if (size == 0)
	{
		*i = k - 1;
	}
	else
		*i = k;
	return (size);
}

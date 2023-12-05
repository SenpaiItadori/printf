#include "main.h"

/**
 * check - checks to see if a string has a format specifier
 * @str: the string to be checked
 * @position: the position of the specifier in the string to be checked
 *
 * Return: 0 if a specifier exists else -1
 */

int check(const char *str, int position)
{
	char fmt[] = {'c', 's', '%', 'i', 'd'};
	int i = 0;

	while (fmt[i])
	{
		if (fmt[i] == str[position])
		{
			return (0);
		}
		i++;
	}
	return (-1);
}

#include "main.h"

/**
 * _putchar - prints a char to stdout
 * @c: the char to be printed
 *
 * Return: the amount of bytes printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

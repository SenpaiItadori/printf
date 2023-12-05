#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

typedef struct
{
	char fmt;
	int (*f)(va_list list);
} Node;

int _putchar(char c);
int handle(va_list list, char symbol);
int print_int(va_list list);
int print_str(va_list list);
int check(const char * str, int position);

#endif

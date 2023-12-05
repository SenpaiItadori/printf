#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(int num);
int print_str(char *str);
int check(const char *str, int position);

#endif

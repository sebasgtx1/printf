#ifndef _main_h_
#define _main_h_
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_char(char *str);
int print_string(char *str);
char* _number_to_char(int n);
int print_number(int);
int _char_to_number(char *str);
int print_number_u(unsigned int);



#endif

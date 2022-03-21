#ifndef _main_h_
#define _main_h_
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(char *str);
int print_string(char *str);
int print_number(int n);

#endif

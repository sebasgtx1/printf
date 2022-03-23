#ifndef _main_h_
#define _main_h_
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct format - Struct that conteins the funtions printf
 * to each format
 * @frt: format
 * @f: function associated
 */
typedef struct format
{
	char *frt;
	int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);
int (*get_fun(char format))(va_list);
int print_char(va_list str);
int print_string(va_list str);
char *_number_to_char(int n);
int print_number(va_list number);
int _char_to_number(char *str);
int print_u_number(va_list number);
int print_binary(va_list number);
void reverse_array(char *str);
int print_octal(va_list num);
int print_revstr(va_list list);
int print_root13(va_list string);
int print_hexa(va_list number);
int UNS_CASE(unsigned int d);
#endif

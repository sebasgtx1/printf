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
format_t (*get_fun)(const char *format)(va_list);
int print_char(char *str);
int print_string(char *str);
char* _number_to_char(int n);
int print_number(int);
int _char_to_number(char *str);
int print_number_u(unsigned int);
int print_binary(int n);
void reverse_array(char *str);



#endif

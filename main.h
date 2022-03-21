#ifndef _main_h_
#define _main_h_
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
/**
 * struct format - Struct that conteins the funtions printf
 * to each format
 * @frt: format
 * @f: function associated
 */
typedef struct format
{
	char *frt;
	int (*f)(char *);
} format_t;


int _printf(const char *format, ...);
int print_char(char *str);
int print_string(char *str);
char* _number_to_char(int n);
int print_number(char *str);
int _char_to_number(char *str);


#endif

#include "main.h"

/**
 * print_char - function prints a char
 * @str: is the char in a pointer form
 * Return : size
 */

int print_char(va_list str)
{
	int value;

	value = va_arg(str, int);
	if (!value)
		return (0);
	
	write(1, &value, 1);
	return (1);
}

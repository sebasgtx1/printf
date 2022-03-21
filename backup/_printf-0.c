#include "main.h"

/**
 * print_char - function prints a char
 * @str: is the char in a pointer form
 * Return : size
 */

int print_char(char *str)
		
{
	if (!str)
		return (0);	

	write(1, &str, 1);

	return (1);
}

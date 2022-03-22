#include "main.h"
/**
 * print_string - function prints an string
 * @list: argument to be printed
 * Return: size number
 */
int print_string(va_list list)
{
	int size = 0, j;
	char *str;

	str = va_arg(list, char *);

	if (!str)
		return (0);

	for (j = 0; str[j]; j++, size++)
		write(1, &str[j], 1);

	return (size);
}

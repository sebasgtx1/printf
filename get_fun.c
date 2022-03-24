#include "main.h"

/**
 * get_fun - gets the correct printf funtion
 * @format: format structure
 * Return: the printf funtion
 */

int (*get_fun(char format))(va_list)
{

	format_t frts[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_number},
	{"i", print_number},
	{"b", print_binary},
	{"u", print_u_number},
	{"o", print_octal},
	{"r", print_revstr},
	{"R", print_root13},
	{"x", print_hexa},
	{"X", print_hexa_up},
	{"S", print_npchar},
	{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 24)
	{
		if (format == frts->frt[i])
			return (frts[i / 2].f);
		i++;
	}

	return (0);
}

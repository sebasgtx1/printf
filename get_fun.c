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
	{"b", print_binary}

	};
	int i;

	i = 0;

	while (i < 8)
	{
		if (format == frts->frt[i])
			break;
		i++;
	}

	return (frts[i / 2].f);
}

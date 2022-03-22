#include "main.h"

/**
 * get_fun - gets the correct printf funtion
 * @frt - format structure
 * Return: the printf funtion
 */

format_t (*get_fun)(const char* format)(va_list)
{

	format_t frts[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_number},
	{"i", print_number},
	};
	int i;

	i = 0;

	while (i < 8)
	{
		if (str[0] == frts->frt[i])
			break;
		i++;
	}

	return (frts[i / 2].f);
}

#include "main.h"

/**
 * _printf - _printf function structure
 * @format: const char input
 * Return: size
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, size = 0;
	int (*fun)(va_list);

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			i++;
			size--;
			fun = get_fun(format[i]);
			if (!fun)
				return (0);

			size += fun(list);
		}
		i++;
		size++;
	}
	va_end(list);

	return (size);
}

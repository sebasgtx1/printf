#include "main.h"
/**
 * _printf - _printf function structure
 * @format: const char input
 * Return: size
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, size = 0, (*fun)(va_list);

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[i])
	{
		if (!format[i])
			return (0);
		if (format[i] != '%' && format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			i++;
			size--;
			fun = get_fun(format[i]);
			if (!fun)
			{
				if (format[i] != '%')
				{
					write(1, &format[i - 1], 1);
					size++;
				}
				write(1, &format[i], 1);
				size++;
			}
			else
				size += fun(list);
		}
		i++;
		size++;
	}
	va_end(list);
	return (size);
}

#include "main.h"

/**
 * _printf - _printf function structure
 * @format: const char input
 * Return : size int
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, size = 0, value;
	char *str;
	int (*_print_fun) (char*);

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			i++;
			size--;
			
			_print_fun = get_fun()


		/**	switch (format[i])
			{
				case 'c':
					str = va_arg(list, char*);
					size += print_char(str);
					break;
				case 's':
					str = va_arg(list, char*);
					size += print_string(str);
					break;
				case 'd':
					value = va_arg(list, int);
					size += print_number(_number_to_char(value));
					break;
			}
		
		*/
		}
		i++;
		size++;
	}
	va_end(list);
	return (size);
}

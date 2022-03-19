#include "main.h"

/**
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j = 0, count = 0;
	char *str;

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			count = 2;
			i++;
			switch(format[i])
			{
				case 'c':
					str = va_arg(list, char*);
					write(1,&str, 1);
					count += 1;
					break;
				case 's':
					str = va_arg(list, char*);
					if (!str)
						break;
					for (j = 0; str[j]; j++)
					{
						write(1,&str[j], 1);
					}
					break;
			}
		}
		i++;
	}
	return(i - count + j);					
}

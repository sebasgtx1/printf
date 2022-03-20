#include "main.h"

/**
 * print_number - function prints an int.
 * @n: is the number
 * Return : size number
 */
int print_number(int n)
{
	unsigned int aux1, aux2, aux3;
	int temp = 1, size = 0, value;

	if (n < 0)
	{
		n = n * -1;
		value = (45);
		write(1, &value, 1);
		size++;
	}
	aux1 = n;
	aux2 = n;
	if (aux1 > 9)
	{
		while (aux1 >= 10)
		{
			temp = temp * 10;
			aux1 /= 10;
		}
		value = ((aux2 / temp) + 48);
		write(1, &value, 1);
		size++;
		temp /= 10;

		for (aux3 = temp; aux3 >= 1; aux3 /= 10)
		{
			value = ((aux2 / aux3) % 10 + 48);
			write(1, &value, 1);
			size++;
		}
	}
	else
	{
		value = (aux1 + 48);
		write(1, &value, 1);
		size++;
	}
	return (size);
}
/**
 * _printf - _printf function structure
 * @format: const char input
 * Return : size int
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j = 0, size = 0, value;
	char *str;

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					str = va_arg(list, char*);
					write(1, &str, 1);
					size += 1;
					break;
				case 's':
					str = va_arg(list, char*);
					if (!str)
						break;
					for (j = 0; str[j]; j++)
					{
						write(1, &str[j], 1);
						size++;
					}
					break;
				case 'd':
					value = va_arg(list, int);
					size += print_number(value);
					break;
			}
		}
		i++;
	}
	return (size);
}

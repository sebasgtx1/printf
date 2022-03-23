#include "main.h"
/**
 * print_u_number - prints an unsigned integer
 * @number: unsigned integer
 * Return: no return
 */
int print_u_number(va_list number)
{
	unsigned int n = va_arg(number, unsigned int);
	unsigned int d, c, value, size = 0;

	d = n;
	c = 1;
	while (d > 9)
	{
		d /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
	{
		value = (((n / c) % 10) + 48);
		write(1, &value, 1);
		size++;
	}
	return (size);
}

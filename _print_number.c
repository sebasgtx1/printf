#include "main.h"
/**
 * print_number - prints an integer
 * @number: integer in char* format
 * Return: no return
 */
int print_number(va_list number)

{
	int n = va_arg(number, int);
	int i, d, c, minus, value, size = 0;

	if (n < 0)
	{
		minus = 45;
		write(1, &minus, 1);
		size++;
		i = n * -1;
	}
	else
	{
		i = n;
	}
	d = i;
	c = 1;
	while (d > 9)
	{
		d /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
	{
		value = (((i / c) % 10) + 48);
		write(1, &value, 1);
		size++;
	}
	return (size);
}

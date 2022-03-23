#include "main.h"

/**
 * print_binary - prints a number in binary
 * @num: number to be printed
 * Return: original number size
 */

int print_binary(va_list num)

{
	int n = va_arg(num, int);
	unsigned int j = 0, d = n;
	char binary;
	char *str;
	char *number;

	if (d == 0)
	{
		write(1, &n, 1);
		return (1);
	}
	str = _number_to_char(d);
	number = malloc(32 + 1);
	if (!number)
	{
		free(number);
		return (0);
	}
	while (d != 0)
	{
		binary = d % 2 + '0';
		number[j] = binary;
		d /= 2;
		j++;
	}
	reverse_array(number);
	j = 0;
	while (number[j])
	{
		write(1, &number[j], 1);
		j++;
	}
	if (n < 0)
		--j;
	free(number);
	free(str);
	return (j);
}

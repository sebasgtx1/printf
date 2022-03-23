#include "main.h"

/**
 * print_octal - prints a number in octal form
 * @num: number to be printed
 * Return: number size in the new format
 */

int print_octal(va_list num)

{
	int n = va_arg(num, int);
	int j = 0, d = n;
	char octal;
	char *str;
	char *number;

	str = _number_to_char(d);
	number = malloc(32 + 1);
	if (!number)
	{
		free(number);
		return (0);
	}
	if (d == 0)
		write(1, "0", 1);
	while (d != 0)
	{
		octal = d % 8 + '0';
		number[j] = octal;
		d /= 8;
		j++;
	}
	reverse_array(number);
	j = 0;
	while (number[j])
	{
		write(1, &number[j], 1);
		j++;
	}
	free(number);
	free(str);
	return (j);
}

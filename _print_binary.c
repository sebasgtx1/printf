#include "main.h"

/**
 * print_binary - prints a number in binary
 * @num: number to be printed
 * Return: original number size
 */

int print_binary(va_list num)

{
	int n = va_arg(num, int);
	unsigned int i = 0, j = 0;
	char binary;
	char *str;
	char *number;

	str = _number_to_char(n);
	while (str[i])
	{
		i++;
	}

	number = malloc(32 + 1);
	if (!number)
	{
		free(number);
		return (0);
	}
	while (n != 0)
	{
		binary = n % 2 + '0';
		number[j] = binary;
		n /= 2;
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
	return (i);
}

#include "main.h"
/**
 * print_hexa_up - prints a number in hexadecimal
 * @num: number to be printed
 * Return: size of the number in hexa
 */
int print_hexa_up(va_list num)
{
	int n = va_arg(num, int);
	unsigned int i = 0, j = 0, d = n, k = 0, hexa;
	char *str, *number;
	int normal[] = {10, 11, 12, 13, 14, 15};
	char encode[] = "ABCDEF";

	if (d == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	str = _number_to_char(d), number = malloc(32 + 1);
	if (!number)
	{
		free(number);
		return (0);
	}
	while (d != 0)
	{
		hexa = d % 16;
		if ((int) hexa >= 0 && hexa < 9)
			number[j] = hexa + '0';
		else
			for (; i < 6; i++)
			{
				if ((int) hexa == normal[i])
				{
					number[j] = encode[i];
					break;
				}
			}
		d /= 16, j++;
	}
	reverse_array(number);
	while (number[k])
	{
		write(1, &number[k], 1), k++;
	}
	free(number), free(str);
	return (k);
}

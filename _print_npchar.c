#include "main.h"

/**
 * to_hex - converts a value to hex
 * @value: value to be converted to hex
 * Return: number of digits of the hex number
 */
int to_hex(int value)
{
	int i = 0;
	char diference_char = 7;
	char hex_array[2];

	hex_array[0] = value / 16;
	hex_array[1] = value % 16;
	for (; i < 2; i++)
	{
		if (hex_array[i] >= 10)
		{
			hex_array[i] += '0' + diference_char;
			write(1, &hex_array[i], 1);
		}

		else
		{
			hex_array[i] += '0';
			write(1, &hex_array[i], 1);

		}

	}
	return (i);
}
/**
 * print_npchar - prtins \x  followed by the ASCII code value
 * in hexadecimal (upper case - always 2 characters)
 * for non printable characters
 * @string: string to be printed
 * Return: size of the string with the
 * \x(hexa) part
 */
int print_npchar(va_list string)
{
	int size = 0, i = 0, j;
	char *nulcase = "(null)";
	char *str;
	char bs = 92;
	char x = 120;

	str = va_arg(string, char *);

	if (!str)
	{
		for (i = 0; nulcase[i]; i++)
		{
			write(1, &nulcase[i], 1);
			return (6);
		}
	}

	for (j = 0; str[j]; j++)
	{
		if ((str[j] > 0 && str[j] < 32) || str[j] >= 127)
		{
			write(1, &bs, 1);
			write(1, &x, 1);
			size += 2 + to_hex(str[j]);
		}
		else
		{
			write(1, &str[j], 1);
			size++;
		}
	}
	return (size);
}

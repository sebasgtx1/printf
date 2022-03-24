#include "main.h"

/**
 * to_hex - converts a value to hex and returns a string
 * with it
 * @value: value to be converted to hex
 * Return: noting
 */
void to_hex(int value)
{
	int k = 0, i = 0;
	int normal[] = {10, 11, 12, 13, 14, 15};
	char encode[] = "ABCDEF";
	char number[5];
	int hexa;
	int count = value;

	while (count != 0)
	{
		hexa = count % 16;
		if (hexa >= 0 && hexa < 9)
			number[2] = hexa;
		else
			for (; i < 6; i++)
			{
				if (hexa == normal[i])
				{
					number[3] = encode[i];
					break;
				}
			}
		count = (int) value / 16;

	}
	number[1] = 'x';
	number[0] = 92;

	for (; k < 5; k++)
	{
		write(1, &number[k], 1);
	}
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

	str = va_arg(string, char *);

	if (!str)
	{
		for (i = 0; nulcase[i]; i++)
			write(1, &nulcase[i], 1);
		return (6);
	}

	for (j = 0; str[j]; j++, size++)
	{
		if ((str[j] > 0 && str[j] < 32) || str[j] >= 127)
		{
			to_hex((int) str[j]);
			size += 4;
		}
		else
			write(1, &str[j], 1);
	}
	return (size);
}

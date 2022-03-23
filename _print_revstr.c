#include "main.h"
/**
 * print_revstr - prints a string in reverse
 * @list: string to be printed in reverse
 * Return: string size
 */
int print_revstr(va_list string)
{
	char *str;
	unsigned int i = 0;
	int j = 0;
	char *nulcase = "(null)";

	str = va_arg(string, char *);
	if (!str)
	{
		for (i = 0; nulcase[i]; i++)
			write(1, &nulcase[i], 1);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		write(1, &str[j], 1);
	}
	return (i);
}

#include "main.h"
/**
 * print_root13 - prints the rot13'ed string
 * @string: is the string to be encrypted
 * Return: the string size
 */
int print_root13(va_list string)
{
	int i = 0, j, bol;
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encode[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char nulcase[] = "(avyy)";
	char *str;

	str = va_arg(string, char *);

	if (!str)
	{
		for (i = 0; nulcase[i]; i++)
			write(1, &nulcase[i], 1);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (j = bol = 0; normal[j]; j++)
		{
			if (str[i] == normal[j])
			{
				bol = 1;
				write(1, &encode[j], 1);
				break;
			}
		}
		if (bol == 0)
			write(1, &str[i], 1);
	}

	return (i);
}

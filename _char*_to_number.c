#include "main.h"
/**
 * _char*_to_number - converts a char* to an int
 * @str : string to be converted to an int
 * Return : the string in int format
 */

int _char_to_number(char *str)
{
	int i = 0, digits = 1, j = 0, number = 0, temp = 0;

	if (!str)
		return (0);
	
	for (; str[i]; i++)
		digits *= 10;
	
	digits /= 10;

	while (str[j])
	{
		temp = (str[j] - '0') * digits;
		number += temp;
		digits /= 10;
		j++;
	}
	
	return (number);
}

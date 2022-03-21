#include "main.h"

/**
 *
 *
 *
 */

int print_binary(int n)

{
	int i = 0, j = 0;
	char binary;
	char *str;
	char *number;
	str =_number_to_char(n);

	while(str[i])
	{
	i++;
	}

	number = malloc(i + 1);
	if (!number)
	{
		free(number);
		return (0);
	}
	while(n != 0)
	{
		binary = n % 2 + '0';
		number[j] = binary;
		n /= 2;
		j++;
	
	}
	reverse_array(number);
	print_string(number);
	free(number);
	return (i);
}

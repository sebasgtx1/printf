#include "main.h"

/**
 * print_string - function prints an string
 * @str: is the string
 * Return : size number
 */        
int print_string(char *str)
{	

	int size = 0, j;

	if (!str)
		return (0);

        for (j = 0; str[j]; j++, size++)
        {
                write(1, &str[j], 1);
        }

	return (size);
}

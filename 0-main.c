#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

	len = _printf("Let's %s %d to printf %c %s sen%cence.\n", "try", 555555, 'a', "simpl    e", 't');                                                                            
	len2 = printf("Let's %s %d to printf %c %s sen%cence.\n", "try", 555555, 'a', "simpl    e", 't'); 

	_printf("Length:[%d, %d]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
    return (0);
}

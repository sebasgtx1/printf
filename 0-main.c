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

    len = _printf("Let's %cry to printf a %s sentence.\n", 't', "simple");
    len2 = printf("Let's %cry to printf a %s sentence.\n", 't', "simple");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("%b\n", 98);
    return(0);
}

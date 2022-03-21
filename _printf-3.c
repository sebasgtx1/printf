#include "main.h"
/**
 * print_number - prints an unsigned integer
 * @n: integrer
 * Return: no return
 */

int print_number_u(unsigned int n)

{
	unsigned int i, d, c, value, size;
 
 	i = n;
        d = i;
        c = 1;

        while (d > 9)
        {
                d /= 10;
                c *= 10;
        }

        for (; c >= 1; c /= 10)
        {
                value = (((i / c) % 10) + 48);
                write(1, &value, 1);
                size++;
        }
        return (size);
}

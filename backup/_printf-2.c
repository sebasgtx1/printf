#include "main.h"
/**
 * print_number - prints an integer
 * @str: integer in char* format
 * Return: no return
 */
int print_number(int n)

{
	int i, d, c, minus, value, size;
	
        if (n < 0)
        {                
		minus = 45;
                write (1, &minus, 1);
                i = n * -1;
        }
        else
        {
                i = n;
        }

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

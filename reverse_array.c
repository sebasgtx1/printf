#include "main.h"
/**
 * reverse_array - reverses an array
 * @str: string
 * Return: reverse string.
 */
void reverse_array(char *str)
{
	int n = 0, i, j;
	char keep;

	for (; str[n]; n++)
		;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			keep = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = keep;
		}
	}
}

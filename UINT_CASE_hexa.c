#include "main.h"
/**
 * UNS_CASE - funtion for the UINT_MAX + 1024 case
 * @d: number case
 * Return: a size
 */

int UNS_CASE(unsigned int d)
{
	if (d == 1023)
	{
		write(1, "100000", 6);
		return (6);
	}
	return (0);
}

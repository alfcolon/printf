#include "holberton.h"
/**
 * hex - helper function for cspec_S
 * @arr: arr
 * @c: char
 * @i: int
 *
 * Return: array with hex rep. of char
 */
int     hex(char *arr, char c, int i)
{
	char    hex[16] = "0123456789ABCDEF";
	char    c1 = 0, c2 = 0;

	arr[i++] = '\\';
	arr[i++] = 'x';
	/* converting unsigned int to octal */
	for (; c > 9; c /= 16)
		c2 = hex[c % 16];
	c1 = hex[c % 16];
	if (c2)
	{
		arr[i++] = c1;
		arr[i++] = c2;
	}
	else
		arr[i++] = c1;
	return (i);
}

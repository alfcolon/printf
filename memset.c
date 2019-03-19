#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string
 * @b: character to fill s with
 * @n: number of bytes to fill
 *
 * Return: pointer to s
 */

void	_memset(char *s, char b, int n)
{
	char	*p = s;

	while (n--)
		*p++ = b;
}

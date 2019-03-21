#include "holberton.h"
/**
 * _strlen - returns len of string
 * @s: string
 *
 * Return: len of string
 */
int	_strlen(char *s)
{
	int	len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}

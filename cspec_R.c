#include "holberton.h"
/**
 * cspec_R - rot13's a string, adds to buffer
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_R(void *arg, char *buff)
{
	char	*s;
	int	len;

	if (!arg)
		return (-1);
	s = (char *)arg;
	len = _strlen(s);
	update_buff(rot13(s), buff, len);
	return (len);
}

#include "holberton.h"
/**
 * cspec_r - reverses string, adds to buffer
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_r(void *arg, char buff[BUFF_SIZE])
{
	char	*s;
	int	len;

	if (!arg)
		return (-1);
	s = (char *)arg;
	len = _strlen(s);
	update_buff(rev_string(s), buff, len);
	return (len);
}

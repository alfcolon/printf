#include "holberton.h"
/**
 * cspec_r - reverses string, adds to buffer
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_r(void *arg, char *buff)
{
	char	*s;
	int	len;

	/* NULL check */
	if (!arg)
	{
		update_buff("(null)", buff, 6);
		return (6);
	}
	s = (char *)arg;
	len = _strlen(s);
	update_buff(rev_string(s), buff, len);
	return (len);
}

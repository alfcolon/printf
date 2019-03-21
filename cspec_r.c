#include "holberton.h"
/**
 * cspec_r - reverses string, adds to buffer
 * @list: va_list from which to pull string
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_r(va_list list, char *buff)
{
	char	*s;
	int	len;

	/* NULL check */
	if (!list)
	{
		update_buff("(null)", buff, 6);
		return (6);
	}
	s = va_arg(list, char *);
	len = _strlen(s);
	update_buff(rev_string(s), buff, len);
	return (len);
}

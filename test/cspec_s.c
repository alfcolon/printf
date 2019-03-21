#include "holberton.h"
/**
 * cspec_s - adds string
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_s(va_list list, char *buff)
{
	char	*s;
	int	len;

	/* NULL check */
	if (!list)
	{
		update_buff("(null)", buff, 6);
		return (6);
	}
	/* Cast */
	s = va_arg(list, char *);
	len = _strlen(s);
	/* Update buffer */
	update_buff(s, buff, len);
	return (len);
}

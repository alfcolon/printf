#include "holberton.h"
/**
 * cspec_s - adds string
 * @list: va_list from which to pull string
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_s(va_list list, char *buff)
{
	char	*s;
	int	len;

	s = va_arg(list, char *);

	/* NULL check */
	if (s == NULL)
	{
		update_buff("(null)", buff, 6);
		return (6);
	}

	len = _strlen(s);

	/* Update buffer */
	update_buff(s, buff, len);
	return (len);
}

#include "holberton.h"
/**
 * cspec_s - adds string
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_s(void *arg, char *buff)
{
	char	*s;
	int	len;

	/* NULL check */
	if (!arg)
	{
		update_buff("(null)", buff, 6);
		return (6);
	}
	/* Cast */
	s = (char *)arg;
	len = _strlen(s);
	/* Update buffer */
	update_buff(s, buff, len);
	return (len);
}

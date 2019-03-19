#include "holberton.h"
/**
 * cspec_c - adds char to buffer
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_c(void *arg, char buff[BUFF_SIZE])
{
	char	*s;

	/* NULL check */
	if (!arg)
		return (-1);
	/* Cast */
	s = (char *)arg;
	/* non-printable char */
	if (!*s)
		return (1);
	/* Update buffer */
	update_buff(s, buff, 1);
	return (1);
}
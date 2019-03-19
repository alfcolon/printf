#include "printf.h"
/**
 * cspec_s - adds string to buffer w/ hex chars
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_s(void *arg, char buff[BUFF_SIZE])
{
	char	*s;
	int	len;
	
	/* NULL check */
	if (!arg)
		return (-1);
	/* Cast */
	s = (char *)arg;
	len = _strlen(s);
	/* Update buffer */
	update_buff(s, buff, len);
	return (len);
}

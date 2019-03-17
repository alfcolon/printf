#include "printf.h"
/**
 * con_spec_s - adds string to buffer
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	con_spec_s(void *arg, char buff[BUFF_SIZE])
{
	char	*s = (char *)arg;
	int	len = _strlen(s);

	buff_update(buff, s, len);
	return (len);
}

#include "holberton.h"
/**
 * cspec_mod - add % to buffer
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_mod(char *arg, char buff[BUFF_SIZE])
{
	int	len = 1;

	update_buff(arg, buff, len);
	return (len);
}

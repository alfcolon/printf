#include "holberton.h"
/**
 * print - prints format string and expanded conversion specifiers
 * @format: holds text and connversion specifiers
 * @list: variadic arguments
 * @buff: container for printing
 *
 * Description: checks for errror, prints buff, returns sum
 * Return: sum of bytes written
 */
int     print(char *format, va_list list, char *buff)
{
	int	total = 0, printed = 0, len = 0;
	char	c1, c2;

	/* Printing loop*/
	while (*format)
	{
		c1 = *format;
		c2 = *(format + 1);
		/* expand cspecs and update buffer*/
		if (c1 == '%' && valid_cspec(c2))
		{
			printed = mod(c2)(va_arg(list, void *), buff);
			total += printed;
			format += 2;
		}
		/* use update buff incase the buff needs to be reset */
		else
		{
			update_buff(&c1, buff, 1);
			if (c1 == '%' && c2 == '%')
				format += 2;
			else
				format++;
			total++;
		}
	}
	if (*buff)
	{
		for (len = 0; buff[len]; len++)
			;
		write(1, buff, len);
	}
	va_end(list);
	return (total);
}

#include "printf.h"
/**
 * print - prints format string and expanded conversion specifiers
 * @format: holds text and connversion specifiers
 * @...: variadic arguments
 *
 * Description: checks for errror, prints buff, returns sum
 * Return: sum of bytes written
 */
int     print(char *format, va_list list, char buff[BUFF_SIZE])
{
	int	total = 0;
	int	printed = 0;
	int	len = 0;
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
			if (printed == -1)
				return (0);
			total += printed;
			format += 2;
		}
		/* use update buff incase the buff needs to be reset */
		else
		{
			update_buff(&c1, buff, 1);
			format++;
			total++;
		}
	}
	/* that one last print */
	if (*buff)
	{
		for (len = 0; buff[len]; len++)
			;
		write(1, buff, len);
		total += len;
	}
	va_end(list);
	return (total);
}

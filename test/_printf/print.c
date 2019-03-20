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
	int     i;
	int	total = 0;
	int	printed = 0;

	/*
	 * Loop through format, populate array with format char
	 * or conversion specifier's argument
	 */
	i = 0;
	while (format[i])
	{
		/* print a percent sign */
		if ((format[i] == '%' || format[i] == '\\') && format[i + 1] == '%')
		{
			buff[i] = format[i];
			printed = 1;
			total += printed;
			i++;
		}
		/* 
		 * Make work for all formats:
		 * c,s,d,i
		 * b binary
		 * u,o,x,X
		 * p
		 * precision
		 * r: reversed string
		 * R: prints the rot13 string
		 */
		else if (format[i] == '%')
		{
			/*
			 * Call to function pointer that
			 * takes in a string and returns a function pointer
			 * that takes in an undetermined data type and returns an int.
			 *
			 * That int just so happens to hold the number of bytes written
			 * and so its used to update the sum : ).
			 
			printed = (mod)(format)(va_arg(list, void *), &buff)
			if (chars_printed)
			{
				i += printed;
				total_printed += printed;
			}
			*/
		}
		else
		{
			/* use update buff incase the buff needs to be reset */
			printed = update_buff(buff, format);
			i += printed;
			total += printed;
		}
	}
	va_end(list);
	return (total);
}

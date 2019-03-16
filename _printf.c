#include "printf.h"
/*place me in .h file*/
#include <stdarg.h>
#define BUFF 1024

/**
 * selector_len - len helper function
 * @format:
 *
 * Return: total len of syntax of conversion specifiers and
 * and friends.
 */
int     selector_len(char *format)
{
	int     sum = 0;
	/* Get the special formats down and check for that :) */
	return (sum);
}
/**
 * _printf - driver function for printf remake
 * @format: holds text and connversion specifiers
 * @...: variadic arguments
 *
 * Description: checks for errror, prints buff, returns sum
 * Return: sum of bytes written
 */
int     _printf(const char *format, ...)
{
	va_list list;
	int     sum = 0;
	char    buff[BUFF];
	int     i = 0;

	va_start(list, format);
	/*
	 * Loop through format, populate array with format char
	 * or conversion specifier's argument
	 */
	while (format[i])
	{
		/* 
		 * Make work for all formats:
		 * c,s,d,i,b
		 * u,o,x,X
		 * S \x, something about widechars
		 * p
		 * flag characters: for non-custom conversion specifiers
		 * length modifers (l, h) to hadle d, i, u, o, x, X
		 * field width
		 * precision
		 * 0 for non custom
		 * Handle the - flaf for nccs
		 * r: reversed string
		 * R: prints the rot13 string
		 */
		if (format[i] == '%')
		{
			/*
			 * Call to function pointer that
			 * takes in a string and returns a function pointer
			 * that takes in an undetermined data type and returns an int.
			 *
			 * That int just so happens to hold the number of bytes written
			 * and so its used to update the sum : ).
			 */
			sum += (mod)(format[i])(va_arg(list, void *), buff);
			i += selector_len((char *)format + i);
		}
		else
		{
			/*
			 * Add char to buff. We could also add all chars until
			 * the next modifier; but will that really help?
			 */
			buff[i] = format[i];
			i++;
		}
	}
	return (sum);
}

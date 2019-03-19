#include "holberton.h"
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
	char    buff[BUFF_SIZE];
	int	printed = 0;
	va_list list;

	if (!format)
		return (0);
	va_start(list, format);
	/*set buff elements to 0*/
	_memset((void *)buff, 0, 1024);
	/* get # of printed characters from print function */
	printed = print((char *)format, list, buff);
	va_end(list);
	return (printed);
}

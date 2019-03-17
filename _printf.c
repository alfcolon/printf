#include "printf.h"
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
	va_list error_check;

	va_start(list, format);
	/* error check */
	va_copy(error_check, list);
	if (error((char *)format, error_check))
		return (0);
	/*set buff elements to 0*/
	memset((void *)buff, 0, 1024);
	/* get # of printed characters from print function */
	printed = print((char *)format, list, buff);
	if (printed == -1)
		return (0);
	return (printed);
}

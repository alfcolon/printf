#include "holberton.h"
/**
 * cspec_c - adds char to buffer
 * @list: va_list to pull char from
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_c(va_list list, char *buff)
{
	char	s;
	char *ptr;

	ptr = malloc(1);

	/* NULL check */
	if (!list)
		return (1);
	/* Cast */
	s = va_arg(list, int);
	*ptr = s;
	/* non-printable char */
	if (!s)
		return (1);
	/* Update buffer */
	update_buff(ptr, buff, 1);
	free(ptr);
	return (1);
}

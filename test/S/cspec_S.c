#include "holberton.h"
/**
 * cspec_S - adds string, converts non-printable char to hex
 * @arg: va_arg
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_S(void *arg, char buff[BUFF_SIZE])
{
	char		*s;
	int		n;
	int		len;
	char		hexlist[] = "0123456789abdef";
	unsigned char	hex;

	/* NULL check */
	if (!arg)
		return (-1);
	/* Cast */
	s = (char *)argi;
	len = _strlen(s);
	/* Not using malloc, so making more calls to update buff :( */
	for (*s)
	{
		if ((0 < *s && *s < 32) || *s >= 127)
			hex(*s);
		else
			update(s, buff, 1);
		s++;
	}		 
	return (len);
}

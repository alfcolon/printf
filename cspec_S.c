#include "holberton.h"
/**
 * cspec_S - handle non-printable characters
 * @arg: Unsigned decimal int to convert to base-8
 * @buff: Buffer to copy octal string into
 *
 * Return: len
 */
int cspec_S(void *arg, char *buff)
{
	char	*s = !arg ? NULL : (char *)arg;
	int	len = !s ? 0 : strlen(s);
	char	arr[len * 5];
	int	i;

	/* NULL check */
	if (!arg)
	{
		update_buff("(null)", buff, 6);
		return (6);
	}
	memset(arr, 0, len * 5);
	for (i = 0; *s; s++)
	{
		if ((*s > 0 && *s < 32) || *s >= 127)
			i = hex(arr, *s, i);
		else
			arr[i++] = *s;
	}
	update_buff(arr, buff, i);
	return (i);
}

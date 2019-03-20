#include "holberton.h"

/**
 * cspec_o - Handle octal format specifiers
 * @arg: Unsigned decimal int to convert to base-8
 * @buff: Buffer to copy octal string into
 *
 * Return: None
 */
int	cspec_o(void *arg, char *buff)
{
	unsigned int	i = 0, *n;
	char		arr[11];

	/* NULL check */
	if (!arg)
		return (-1);
	/* set array elements to 0 */
	n = (unsigned int *) &arg;
	/* converting unsigned int to octal */
	for (; *n > 9; i++, *n /= 8)
		arr[i] = (*n % 8) + '0';
	arr[i] = (*n % 8) + '0';
	/* send array to be reversed */
	update_buff(rev_string(arr), buff, i);
	return (0);
}

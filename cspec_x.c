#include "holberton.h"

/**
 * cspec_x - handle hexadecimal format specifiers
 * @val: Unsigned decimal int to convert to base-8
 * @buff: Buffer to copy octal string into
 *
 * Return: None
 */
int cspec_x(void *arg, char buff[BUFF_SIZE])
{
	unsigned int	i = 0, *n;
	char		arr[11];
	char		hex[16] = "0123456789abcdef";
	/* NULL check */
	if (!arg)
	{
		update_buff("0", buff, 1);
		return (1);
	}
	/* set array elements to 0 */
	n = (unsigned int *) &arg;
	/* converting unsigned int to octal */
	for (; *n > 9; i++, *n /= 16)
		arr[i] = hex[*n % 16];
	arr[i] = (*n % 16) + '0';
	/* send array to be reversed */
	update_buff(rev_string(arr), buff, i);
	return (0);
}

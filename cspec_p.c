#include "holberton.h"
/**
 * cspec_p - handle addresses
 * @arg: Unsigned decimal int to convert to base-8
 * @buff: Buffer to copy octal string into
 *
 * Return: None
 */
int cspec_p(void *arg, char *buff)
{
	long	i = 0, n;
	char	arr[20];
	char	hex[16] = "0123456789abcdef";

	/* NULL check */
	if (!arg)
	{
		update_buff("0", buff, 1);
		return (1);
	}
	_memset(arr, 0, 20);
	/* set array elements to 0 */
	n = (long) arg;
	/* converting unsigned int to octal */
	for (i = 0; n > 9; i++, n /= 16)
		arr[i] = hex[n % 16];
	arr[i++] = (n % 16) + '0';
	/* send array to be reversed */
	arr[i++] = 'x';
	arr[i++] = '0';
	rev_string(arr);
	update_buff(arr, buff, i);
	return (i);
}

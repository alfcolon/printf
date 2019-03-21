#include "holberton.h"
/**
 * cspec_d_i - stringifies int and sends to buff
 * @arg: variadic argument
 * @buff: temp array for printing
 *
 * Return: # of chars printed
 */
int     cspec_d_i(va_list list, char *buff)
{
	int i, neg, n;
	char  arr[13];

	/* NULL check */
	if (!list)
	{
		update_buff("0", buff, 1);
		return (1);
	}
	/* set array elements to 0 */
	_memset(arr, 0, 13);
	/* get n ready for "stringify'ing", esp. if its neg */
	n = va_arg(list, int);
	neg = n < 0 ? 1 : 0;
	for (i = 0; n; n /= 10, i++)
		arr[i] = neg ? (n % 10) * -1 + '0' : (n % 10) + '0';
	if (neg)
		arr[i++] = '-';
	/* send array to be reversed */
	rev_string(arr);
	update_buff(arr, buff, i);
	return (i);
}

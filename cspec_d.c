#include "holberton.h"
/**
 * cspec_d - stringifies int and sends to buff
 * @arg: variadic argument
 * @buff: temp array for printing
 *
 * Return: # of chars printed
 */
int     cspec_d(void *arg, char buff[BUFF_SIZE])
{
	int i, neg, *n;
	char  arr[13];

	/* NULL check */
	if (!arg)
		return (-1);
	/* set array elements to 0 */
	memset(arr, 0, 13);
	/* get n ready for "stringify'ing", esp. if its neg */
	n = (int *) &arg;
	neg = *n < 0 ? 1 : 0;
	*n = *n < 0 ? *n * -1 : *n;
	for (i = 0; *n; *n /= 10, i++)
		arr[i] = (*n % 10) + '0';
	if (neg)
		arr[i++] = '-';
	/* send array to be reversed */
	update_buff(rev_string(arr), buff, i);
	return (i);
}

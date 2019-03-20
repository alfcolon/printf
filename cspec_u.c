#include "holberton.h"
/**
 * cspec_u - sends unsigned int and sends to buff
 * @arg: variadic argument
 * @buff: temp array for printing
 *
 * Return: # of chars printed
 */
int     cspec_u(void *arg, char buff[BUFF_SIZE])
{
	unsigned int	i, *n;
	char	arr[13];

	/* NULL check */
	if (!arg)
	{
		update_buff("0", buff, 1);
		return (1);
	}
	/* set array elements to 0 */
	_memset(arr, 0, 13);
	/* get n ready for "stringify'ing", esp. if its neg */
	n = (unsigned int *) &arg;
	for (i = 0; *n; *n /= 10, i++)
		arr[i] = (*n % 10) + '0';
	/* send array to be reversed */
	update_buff(rev_string(arr), buff, i);
	return (i);
}

#include "holberton.h"
/**
 * cspec_b - converts num to binary
 * @arg: int to be converted to binary
 * @buff: container for printing
 *
 * Return: amount of chars printed
 */
int     cspec_b(void *arg, char buff[BUFF_SIZE])
{
	unsigned int	i, *n, mag = 2147483648;
	char  		bin[33];

	if (!arg)
	{
		update_buff("0", buff, 1);
		return (1);
	}
	n = (unsigned int *) &arg;
	_memset(bin, 0, 33);
	while (!(*n & mag))
		mag >>= 1;
	printf("%u\n", mag);
	for (i = 0; mag > 0; i++, mag >>= 1)
		bin[i] = (*n & mag) ? '1' : '0';
	update_buff(bin, buff, i);
	return (i);
}

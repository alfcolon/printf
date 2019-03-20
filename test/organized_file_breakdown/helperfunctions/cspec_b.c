#include "printf.h"

int     cspec_b(void *arg, char buff[BUFF_SIZE])
{
	unsigned int i, *n;
	char  bin[32];
	unsigned int   mag = 2147483648;

	if (!arg)
		return (-1);
	n = (unsigned int *) &arg;
	for (i = 0; i < 32; i++, mag >>= 1)
		bin[i] = (*n & mag) ? '1' : '0';
	update_buff(bin, buff, 32);
	return (32);
}

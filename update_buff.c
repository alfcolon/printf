#include "holberton.h"
/**
 * update_buff - updates and/or resets the buff for printing
 * @arg: string to be added to buff
 * @buff: container for printing
 * @arglen: len of arg
 *
 */
void	update_buff(char *arg, char buff[BUFF_SIZE], int arglen)
{
	int	bufflen, i;

	/* for \0 in format string, a len may have to be tracked and passed */
	for (bufflen = 0; buff[bufflen]; bufflen++)
		;
	/* avoid seg faulting */
	if (arglen + bufflen >= BUFF_SIZE)
	{
		/* write out buff */
		write(1, buff, bufflen);
		/* reset buff */
		/* UPDATE ME */
		_memset((char *)buff, 0, BUFF_SIZE);
		bufflen = 0;
	}
	/* copy arg into buff for later printing, when buff is full */
	for (i = 0; i < arglen; bufflen++, i++)
		buff[bufflen] = arg[i];
}

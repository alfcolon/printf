#include "holberton.h"

/**
 * conspec_c - Add char to buffer
 * @c: Pointer to char
 * @buff: Buffer to put char into
 *
 * Return: None
 */

void cspec_c(void *c, char *buff)
{
	/* Cast void pointer to a char pointer */
	char *ch = c;

	/* Add char to the buffer */
	update_buff(ch, buff, 1);
}

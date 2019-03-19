#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * cspec_x - Handle lowercase hex specifiers
 * @val: Unsigned decimal int to convert to base-16
 * @buffer: Buffer to copy lowercase hex string into
 *
 * Return: None
 */

void cspec_x(void *val, char *buffer)
{
	unsigned int *valu = val;
	unsigned int value = *valu;

	char *st;
	char *end;
	char *string;
	char *digits = "0123456789abcdef";

	string = malloc(32 * sizeof(unsigned int));
	if (!string)
		exit(1);

	st = string;
	end = string;

	do {
		*st = digits[value % 16];
		value /= 16;
		st++;
	} while (value);

	*st = '\0';
	st--;

	while (*end)
	{
		update_buff(st, buffer, 1);
		st--;
		end++;
	}
	free(string);
}

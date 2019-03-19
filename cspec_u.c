#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * cspec_u - Handle unsigned format specifiers
 * @val: Unsigned int to copy into buffer
 * @buffer: Buffer to copy string to
 *
 * Return: None
 */

void cspec_u(void *val, char *buffer)
{
	unsigned int *valu = val;
	unsigned int value = *valu;

	char *st;
	char *end;
	char *string;
	char *digits = "0123456789";

	string = malloc(32 * sizeof(unsigned int));
	if (!string)
		exit(1);

	st = string;
	end = string;

	do {
		*st = digits[value % 10];
		st++;
		value /= 10;
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

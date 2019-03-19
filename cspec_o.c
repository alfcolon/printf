#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * cspec_o - Handle octal format specifiers
 * @val: Unsigned decimal int to convert to base-8
 * @buffer: Buffer to copy octal string into
 *
 * Return: None
 */

void cspec_o(void *val, char *buffer)
{
	unsigned int *valu = val;
	unsigned int value = *valu;

	char *st;
	char *end;
	char *string;
	char *digits = "01234567";

	string = malloc(32 * sizeof(unsigned int));
	if (!string)
		exit(1);

	st = string;
	end = string;

	do {
		*st = digits[value % 8];
		value /= 8;
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

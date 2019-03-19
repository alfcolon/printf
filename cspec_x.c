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
	char tmp_char;

	char *string;
	char *digits = "0123456789abcdef";

	string = malloc(32 * sizeof(unsigned int));
	if (!string)
		exit(1);

	char *st = string;
	char *end = string;

	do {
		tmp_value = value;
		value /= 16;
		*st = digits[tmp_value % 16];
		st++;
	} while (value);

	st--;

	while (end < st)
	{
		tmp_char = *st;
		*st = *end;
		st--;
		*end = tmp_char;
		end++;
	}
	free(string);
}

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
	char tmp_char;
	int tmp_value;

	char *st = buffer;
	char *end = buffer;
	char *digits = "01234567";

	do {
		tmp_value = value;
		value /= 8;
		*st = digits[tmp_value % 8];
		st++;
	} while (value);

	*st = '\0';
	st--;

	while (end < st)
	{
	tmp_char = *st;
	*st-- = *end;
	*end++ = tmp_char;
	}
}

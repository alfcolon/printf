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
	char tmp_char;

	char *string;
	char *digits = "0123456789";

	string = malloc(32 * sizeof(unsigned int));
	if (!string)
		exit(1);

	char *st = string;
	char *end = string;

	while (value)
	{
		*st = digits[value % 10];
		st++;
		value /= 10;
	}

	st--;

	while (end < st)
	{
		tmp_char = *st;
		*st = *end;
		st--;
		*end = tmp_char;
		end++;
	}
}

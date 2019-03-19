#include "holberton.h"

/**
 * mod - Determine which function to use to process format specifier
 * @s: Pointer to '%' in format string
 *
 * Return: Pointer to function to use to process format specifier
 */

void (*mod(char *s))(void *)
{
	types t_array[] = {
		{'c', cspec_c},
		{'s', cspec_s},
		{'d', spec_num},
		{'i', spec_num},
		{'u', spec_num},
		{'o', cspec_o},
		{'x', cspec_x},
		{'X', cspec_X},
		{NULL, NULL}
	};
	int i;

	//loop through array of structs
	while (i < 5)
	{
		// check if char after % matches char in struct
		if (*(s + 1) == t_array[i].char)
		{
			// if yes return function for dealing w that data type
			return(t_array.f);
		}
	}

	// for no buffer
	//_putchar('%');
	//_putchar(*(s + 1));

	// for use with buffer
	//_memcpy(buff, s, 2);
	//return (NULL);
}

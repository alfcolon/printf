#include "printf.h"

/**
 * mod - Determine which function to use to process format specifier
 * @s: Pointer to '%' in format string
 *
 * Return: Pointer to function to use to process format specifier
 */
int (*mod(char cspec))(void *arg, char buff[BUFF_SIZE])
{
	int 	i;
	t_array	arr[] = {
		{"s", cspec_s},
		{"b", cspec_b},
		{"d", cspec_d},
		{NULL, NULL}
	};
	
	//loop through array of structs
	for (i = 0; *arr[i].spec; i++)
	{
		if (cspec == *arr[i].spec)
			// if yes return function for dealing w that data type
			return (arr[i].f);
	}
	return (0);
}

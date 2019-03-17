#include "holberton.h"

void (*mod (char *))(void *)
{
	types t_array[] = {
		{'c', cspec_c},
		{'s', cspec_s},
		{'d', spec_num},
		{'i', spec_num},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (*(s + 1) == t_array[i].char)
			return(t_array.f);
	}

	// for no buffer
	//_putchar('%');
	//_putchar(*(s + 1));

	// for use with buffer
	//_memcpy(buff, s, 2);
	//return (NULL);
}

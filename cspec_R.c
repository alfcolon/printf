#include "holberton.h"
/**
 * cspec_R - rot13's a string, adds to buffer
 * @list: va_list from which to pull string
 * @buff: char array for printing
 *
 * Return: number of chars printed.
 */
int	cspec_R(va_list list, char *buff)
{
	char *str;
	char *in = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *out = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i, j, len;

	str = va_arg(list, char *);
	len = _strlen(str);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(in + j) != '\0'; j++)
		{
			if (*(str + i) == *(in + j))
			{
				*(str + i) = *(out + j);
				break;
			}
		}
	}
	update_buff(str, buff, len);
	return (len);
}

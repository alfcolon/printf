#include "printf.h"
/**
 * valid_cspec - checks if input is conversion specifier
 * @c: character for matching
 *
 * Return: 1 for valid, 0 for no match.
 */
int	valid_cspec(char c)
{
	char	specs[] = "csdibuoxXprR";
	int	i;

	for (i = 0; specs[i]; i++)
		if (c == specs[i])
			return (1);
	return (0);
}

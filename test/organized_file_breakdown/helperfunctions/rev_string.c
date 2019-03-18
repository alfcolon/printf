#include "printf.h"
/**
 * rev_string - that reverses a string.
 * @s: string
 *
 * Description: that reverses a string.
 * Return: void
 */
char	*rev_string(char *s)
{
	int	i, len = _strlen(s);
	char	temp;

	i = 0;
	while (i < len--)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
	}
	return (s);
}

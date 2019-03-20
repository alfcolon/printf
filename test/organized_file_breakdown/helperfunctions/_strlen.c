#include "printf.h"

int	_strlen(char *s)
{
	int	len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}

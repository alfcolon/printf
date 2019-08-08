#include "printf.h"

int     _printf(const char *format, ...)
{
    int         i, printed, len;
    va_list     list;

    len = strlen(format);
    printed = 0;
    if (!format)
        return (-1);
    va_start(list, format);
    /* Evaluate each directive in format string */
    for (i = 0; i < len; printdirective((char *)format, list, &i, &printed));
    va_end(list);
    return (printed);
}

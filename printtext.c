#include "printf.h"

int     printtext(char *format, int *i, int *printed)
{
    int j, count = 0;

    /* Print characters from format[i] until a '%' or NULL character is reached */
    for (j = *i; format[j] && format[j] != '%'; j++, count++)
        write(1, &format[j], 1);
    /* Update printed and i variables */
    *printed = count;
    *i += count;
    return (count);
}
#include "printf.h"

int     cspec_d_i(char *format, va_list list, int *printed, int *i)
{
    int     n, len;
    char    *buff;

    n = va_arg(list, int);
    /* NULL check */
    if (!n)
    {
        write(1, "0",1 );
        *printed += 1;
        *i += 2;
        return (1);
    }
    /* Fill buff array with stringified int n */
    buff = malloc(sizeof(char) * 25);
    memset(buff, 0, 25);
    _itoa(n, buff, 10);
    /* print buff */
    len = strlen(buff);
    write(1, buff, len);
    /* free buff */
    free(buff);
    /* update printed and i variables */
    *printed += len;
    *i += 2;
    return (1);
}

int cspec_mod(char *format, va_list list, int *printed, int *i)
{
    write(1, "%", 1);
    *i += 1;
    *printed += 1;
    return (1);
}
int cspec_u(char *format, va_list list, int *printed, int *i)
{
    unsigned int    n, len;
    char    *buff;

    n = va_arg(list, unsigned int);
    /* NULL check */
    if (!n)
    {
        write(1, "0",1 );
        *printed += 1;
        *i += 2;
        return (1);
    }
    /* Fill buff array with stringified int n */
    buff = malloc(sizeof(char) * 25);
    memset(buff, 0, 25);
    uitoa(n, buff, 10);
    /* print buff */
    len = strlen(buff);
    write(1, buff, len);
    /* free buff */
    free(buff);
    /* update printed and i variables */
    *printed += len;
    *i += 2;
    return (1);
}
int cspec_o(char *format, va_list list, int *printed, int *i)
{
    unsigned int n, len;
    char		*buff;

    n = va_arg(list, int);
    /* NULL check */
    if (!n)
    {
        write(1, "0",1 );
        *printed += 1;
        *i += 2;
        return (1);
    }
    /* Fill buff array with stringified int n */
    buff = malloc(sizeof(char) * 25);
    memset(buff, 0, 25);
    uitoa(n, buff, 8);
    /* print buff */
    len = strlen(buff);
    write(1, buff, len);
    /* free buff */
    free(buff);
    /* update printed and i variables */
    *printed += len;
    *i += 2;
    return 1;
}
int cspec_xX(char *format, va_list list, int *printed, int *i)
{
    unsigned int    n, len;
    char		    *buff, c;

    n = va_arg(list, int);
    /* NULL check */
    if (!n)
    {
        write(1, "0",1 );
        *printed += 1;
        *i += 2;
        return (1);
    }
    /* Fill buff array with stringified int n */
    buff = malloc(sizeof(char) * 25);
    memset(buff, 0, 25);
    c = format[*i + 1];
    (c == 'x') ? xXtoa('x', n, buff, 16) : xXtoa('X', n, buff, 16);;
    /* print buff */
    len = strlen(buff);
    write(1, buff, len);
    /* free buff */
    free(buff);
    /* update printed and i variables */
    *printed += len;
    *i += 2;
    return (1);
}

int cspec_c(char *format, va_list list, int *printed, int *i)
{
    char    c;

    c = va_arg(list, int);
    if (!c)
    {
        write(1, "(null)", 6);
        *i += 2;
        *printed += 6;
        return (1);
    }
    write(1, &c, 1);
    *i += 2;
    *printed += 1;
    return (1);
}
int cspec_s(char *format, va_list list, int *printed, int *i)
{
    char    *s;
    unsigned int    len;

    s = va_arg(list, char *);
    if (!s)
    {
        write(1, "(null)", 6);
        *i += 2;
        *printed += 6;
        return (1);
    }
    len  = strlen(s);
    write(1, s, len);
    *i += 2;
    *printed += len;
    return (1);
}
int cspec_n(char *format, va_list list, int *printed, int *i)
{
    *i += 2;
    return (1);
}
int cspec_p(char *format, va_list list, int *printed, int *i)
{
    unsigned int    p, len;
    char    *buff;

    p = va_arg(list, int);
    if (!p)
    {
        write(1, "0x0", 3);
        *printed += 3;
        *i += 2;
        return (1);
    }
    buff = malloc(sizeof(char) * 25);
    memset(buff, 0, 25);
    xXtoa('x', p, buff, 10);
    write(1, "07ffe", 5);
    len = strlen(buff);
    write(1, buff, len);
    *printed += len + 5;
    *i += 2;
    return (1);
}
int cspec_f(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_D(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_O(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_U(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_e(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_E(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_F(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_g(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_G(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_a(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_A(char *format, va_list list, int *printed, int *i)
{
    return (1);
}
int cspec_C(char *format, va_list list, int *printed, int *i)
{
    //wide char
    return (1);
}
int cspec_S(char *format, va_list list, int *printed, int *i)
{
    return (1);
}

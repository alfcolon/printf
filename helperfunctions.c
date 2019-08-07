#include "printf.h"

char *strrev(char *buff)
{
    int len, i, temp;

    len = strlen(buff);
    i = 0;
    while (i < len--)
    {
        temp = buff[i];
        buff[i] = buff[len];
        buff[len] = temp;
        i++;
    }
    return (buff);
}
char *uitoa(unsigned int n, char *buff, int base)
{
    int i;

    for (i = 0; n; n /= base, i++) {
        buff[i] = (n % base) + '0';
    }
    return (strrev(buff));
}

char *_itoa(int n, char *buff, int base)
{
    int i, neg;

    printf("\n%d\n", n);
    neg = n < 0 ? 1 : 0;
    if (neg)
        n *= -1;
    for (i = 0; n; n /= base, i++) {
        buff[i] = (n % base) + '0';
    }
    if (neg)
        buff[i] = '-';
    return (strrev(buff));
}

char *xXtoa(char c, unsigned int n, char *buff, int base)
{
    int     i, neg;
    char    *hex = (c == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";

    neg = n < 0 ? 1 : 0;
    if (neg)
        n *= -1;
    for (i = 0; n; n /= base, i++) {
        buff[i] = hex[(n % base)];
    }
    if (neg)
        buff[i] = '-';
    return (strrev(buff));
}

int issudoku(char *format, int *i)
{
    char s[] = "sudoku";
    int j, k;

    for (j = 0, k = *i; j < 6 && format[k]; j++, k++)
        if (format[k] != s[j])
            return (0);
    return (1);
}
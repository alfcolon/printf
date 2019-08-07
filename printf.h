#ifndef PRINTF_PRINTF_H
#define PRINTF_PRINTF_H

/* h files */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

typedef	struct mods
{
    char	*spec;
    int	    (*f)(char *format, va_list list, int *printed, int *i);
}	t_array;

/* prototypes */
int     cspec_mod(char *format, va_list list, int *printed, int *i);
int     cspec_d_i(char *format, va_list list, int *printed, int *i);
int     cspec_u(char *format, va_list list, int *printed, int *i);
int     cspec_o(char *format, va_list list, int *printed, int *i);
int     cspec_xX(char *format, va_list list, int *printed, int *i);
int     cspec_D(char *format, va_list list, int *printed, int *i);
int     cspec_O(char *format, va_list list, int *printed, int *i);
int     cspec_U(char *format, va_list list, int *printed, int *i);
int     cspec_e(char *format, va_list list, int *printed, int *i);
int     cspec_E(char *format, va_list list, int *printed, int *i);
int     cspec_f(char *format, va_list list, int *printed, int *i);
int     cspec_F(char *format, va_list list, int *printed, int *i);
int     cspec_g(char *format, va_list list, int *printed, int *i);
int     cspec_G(char *format, va_list list, int *printed, int *i);
int     cspec_a(char *format, va_list list, int *printed, int *i);
int     cspec_A(char *format, va_list list, int *printed, int *i);
int     cspec_C(char *format, va_list list, int *printed, int *i);
int     cspec_c(char *format, va_list list, int *printed, int *i);
int     cspec_S(char *format, va_list list, int *printed, int *i);
int     cspec_s(char *format, va_list list, int *printed, int *i);
int     cspec_p(char *format, va_list list, int *printed, int *i);
int     cspec_n(char *format, va_list list, int *printed, int *i);
int     cspec_sudoku(char *format);
void    printdirective(char *format, va_list list, int *printed, int *i);
int     printtext(char *format, int *i, int *printed);
char    *_itoa(int n, char *buff, int base);
char    *uitoa(unsigned int n, char *buff, int base);
char    *xXtoa(char c, unsigned int n, char *buff, int base);
char    *strrev(char *buff);
int     issudoku(char *format, int *i);
int     _printf(const char *format, ...);
#endif //PRINTF_PRINTF_H

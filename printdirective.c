#include "printf.h"

void printdirective(char *format, va_list list, int *i, int *printed)
{
    int	 j;

    t_array	arr[] = {
            {"%", cspec_mod},
            {"d", cspec_d_i},
            {"i", cspec_d_i},
            {"u", cspec_u},
            {"o", cspec_o},
            {"x", cspec_xX},
            {"Xe", cspec_xX},
            {"D", cspec_D},
            {"O", cspec_O},
            {"U", cspec_U},
            {"e", cspec_e},
            {"E", cspec_E},
            {"f", cspec_f},
            {"F", cspec_F},
            {"g", cspec_g},
            {"G", cspec_G},
            {"a", cspec_a},
            {"A", cspec_A},
            {"C", cspec_C},
            {"c", cspec_c},
            {"S", cspec_S},
            {"s", cspec_s},
            {"p", cspec_p},
            {"n", cspec_n},
            {NULL, NULL}
    };
    if (issudoku(format, i))
        cspec_sudoku(format);
    else if (format[*i] != '%')
        printtext(format, i, printed);
    else {
        for (j = 0; arr[j].spec; j++) {
            if (format[*i + 1] == *arr[j].spec) {
                arr[j].f(format, list, printed, i);
                break;
            }
        }
    }
}

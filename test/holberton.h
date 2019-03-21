#ifndef	test
#define	test
#include <stdio.h>
/* variadic functions */
#include <stdarg.h>
/* memset */
#include <string.h>
/* constants */
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct mods - struct
 * @spec: conversion specifier
 * @f: function pointer
 *
 */
typedef	struct mods
{
	char	*spec;
	int	(*f)(va_list, char *buff);
}	t_array;

int	_printf(const char *format, ...);
int	print(char *format, va_list list, char *buff);
int	(*mod(char cspec))(va_list, char *buff);
/* helper mod functions */
int	cspec_b(va_list, char *buff);
int	cspec_c(va_list, char *buff);
int	cspec_d_i(va_list, char *buff);
int	cspec_o(va_list, char *buff);
int	cspec_p(va_list, char *buff);
int	cspec_r(va_list, char *buff);
int	cspec_R(va_list, char *buff);
int	cspec_s(va_list, char *buff);
int	cspec_S(va_list, char *buff);
int	cspec_u(va_list, char *buff);
int	cspec_x(va_list, char *buff);
int	cspec_X(va_list, char *buff);
/* general helper functions */
int	_putchar(int c);
void	_memset(char *s, char b, int n);
char	*rot13(char *s);
char	*rev_string(char *s);
int	valid_cspec(char c);
int	_strlen(char *s);
int     hex(char *arr, char c, int i);
void	update_buff(char *arg, char *buff, int len);
int	error(char *format, va_list copy);
#endif

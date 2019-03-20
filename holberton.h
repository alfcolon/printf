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

/**
 * struct mods - struct
 * @spec: conversion specifier
 * @f: function pointer
 *
 */
typedef	struct mods
{
	char	*spec;
	int	(*f)(void *, char *buff);
}	t_array;

int	_printf(const char *format, ...);
int	print(char *format, va_list list, char *buff);
int	(*mod(char cspec))(void *arg, char *buff);
/* helper mod functions */
int	cspec_b(void *arg, char *buff);
int	cspec_c(void *arg, char *buff);
int	cspec_d_i(void *arg, char *buff);
int	cspec_o(void *arg, char *buff);
int	cspec_p(void *arg, char *buff);
int	cspec_r(void *arg, char *buff);
int	cspec_R(void *arg, char *buff);
int	cspec_s(void *arg, char *buff);
int	cspec_S(void *arg, char *buff);
int	cspec_u(void *arg, char *buff);
int	cspec_x(void *arg, char *buff);
int	cspec_X(void *arg, char *buff);
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

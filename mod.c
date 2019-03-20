#include "holberton.h"

/**
 * mod - Determine which function to use to process format specifier
 * @cspec: conversion specifier character
 *
 * Return: Pointer to function to use to process format specifier
 */
int (*mod(char cspec))(void *arg, char buff[BUFF_SIZE])
{
	int	i;

	t_array	arr[] = {
		{"b", cspec_b},
		{"c", cspec_c},
		{"s", cspec_s},
		{"d", cspec_d_i},
		{"i", cspec_d_i},
		{"u", cspec_u},
		{"o", cspec_o},
		{"x", cspec_x},
		{"X", cspec_X},
		{NULL, NULL}
	};
	/* loop through array of structs */
	for (i = 0; arr[i].spec; i++)
	{
		printf("i:%d\n", i);
		if (cspec == *arr[i].spec)
			/* if yes return function for dealing w that data type */
			return (arr[i].f);
	}
	return (0);
}

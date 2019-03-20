#ifndef	test
#define	test
/* variadic functions */
#include <stdarg.h>
/* memset */
#include <string.h>
/* constants */
#define BUFF_SIZE 1024
int	_printf(const char *format, ...);
int	error(char *format, va_list copy);
int	print(char *format, va_list list, char buff[BUFF_SIZE]);
//int	(*mod)(char *format)(void *arg, char *buff[BUFF_SIZE]);
int	update_buff(char buff[BUFF_SIZE], char *format);
#endif

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
void    test(void *arg)
{
	int *i = (int *) &arg;

 	printf("%d\n", *i);
}
void     cspec_b(int arg, ...)
{
        va_list          list;
        va_start(list, arg);
        test(va_arg(list, void *));
	va_end(list);
}
int main(void) {
  cspec_b(1, 44, 44);
  return 0;
}

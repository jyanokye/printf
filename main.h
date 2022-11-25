#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct func_s -Struct func_s
 * @op: the operator
 * @f:The function associated
 */
typedef struct func_s
{
	char *op;
	int (*f)(va_list);
} func_t;

/* _putchar function */
int _putchar(char c);





/* rev_string function */
void rev_string(char *s);
int printf_stringreverse(va_list args);

/* Function that produces output according to a format */
int _printf(const char *format, ...);

/* print_str functions */
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

/* print_int functions */
int print_int_helper(int n);
int print_int(va_list ap);

/*print_binary functions */
int print_binary(va_list ap);
int printf_binary(va_list ap);

/* print_unsigned functions */
int print_unsigned_int(va_list ap);

/* octal */
int printf_oct(va_list ap);

int printf_rot13(va_list args);

int printf_special_string(va_list ap);
#endif /* MAIN_H*/

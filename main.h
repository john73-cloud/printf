#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
void pr_int(int n);
int four(va_list ptr);
void two(va_list ptr);
void three(va_list ptr);
void one(va_list ptr);
void five(va_list ptr);
#endif
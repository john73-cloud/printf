#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * one - func
 * @ptr: ptr
 * Return: void
 */
void one(va_list ptr)
{
	putchar(va_arg(ptr, int));
}
/**
 * two - func
 * @ptr: ptr
 * Return: void
 */
void two(va_list ptr)
{
	va_arg(ptr, char *);
}
/**
 * three - func
 * @ptr: ptr
 * Return: void
 */
void three(va_list ptr)
{
	va_arg(ptr, int);
	putchar('%');
}
/**
 * four - func
 * @ptr: ptr
 * Return: void
 */
int four(va_list ptr)
{
	char *s = va_arg(ptr, char *);
	int len = strlen(s);
	int i;
	for (i = 0; i < len; i++)
	{
		putchar(s[i]);
	}
	return (len);
}
/**
 * five - func
 * @ptr: ptr
 * Return: void
 */
void five(va_list ptr)
{
	int m = va_arg(ptr, int);
	pr_int(m);
}
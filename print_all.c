#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * one - func
 * @ptr: ptr
 */
void one(va_list ptr)
{
	putchar(va_arg(ptr, int));
}
/**
 * two - func
 * @ptr: ptr
 */
void two(va_list ptr)
{
	va_arg(ptr, char *);
}
/**
 * three - func
 * @ptr: ptr
 */
void three(va_list ptr)
{
	va_arg(ptr, int);
	putchar('%');
}
/**
 * four - func
 * @ptr: ptr
 * @s: s
 */
void four(va_list ptr)
{
	char *s = va_arg(ptr, char *);
	int len = strlen(s);
	int i;
	for (i = 0; i < len; i++)
	{
		putchar(s[i]);
	}
}

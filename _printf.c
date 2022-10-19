#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function
 *
 * @format: format
 * @return int
 */
int _printf(const char *format, ...)
{
	const char *text = format;
	int len = strlen(format);
	int i;
	int i2;
	char str;
	int skiptwo = 0;
	va_list ptr;
	char formats[] = {'c', 's', '%'};

	va_start(ptr, format);
	for (i = 0; i < len; i++)
	{
		str = format[i];
		for (i2 = 0; i2 < 3; i2++)
		{
			if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == 'c')
			{
				one(ptr);
				skiptwo = 1;
			}
			else if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == 's')
			{
				four(ptr);
				skiptwo = 1;
			}
			else if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == '%')
			{
				three(ptr);
				skiptwo = 1;
			}
			else
			{
				two(ptr);
			}
		}
		if (skiptwo == 0)
		{
			putchar(str);
		}
		else
		{
			i = i + 1;
			skiptwo = 0;
		}
	}
	return (0);
}
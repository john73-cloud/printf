#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function
 * @format: format
 * Return: int
 */
int _printf(const char *format, ...)
{
	const char *text = format;
	int len = strlen(format);
	int lenchar = 0;
	int i;
	int i2;
	int m;
	char str;
	int skiptwo = 0;
	va_list ptr;
	char formats[] = {'c', 's', '%', 'd', 'i'};

	va_start(ptr, format);
	for (i = 0; i < len; i++)
	{
		str = format[i];
		for (i2 = 0; i2 < 5; i2++)
		{
			if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == 'c')
			{
				one(ptr);
				lenchar++;
				skiptwo = 1;
			}
			else if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == 's')
			{
				m = four(ptr);
				lenchar = lenchar + m;
				skiptwo = 1;
			}
			else if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == '%')
			{
				three(ptr);
				lenchar++;
				skiptwo = 1;
			}
			else if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == 'd')
			{
				five(ptr);
				lenchar++;
				skiptwo = 1;
			}
			else if (text[i] == '%' && text[i + 1] == formats[i2] && formats[i2] == 'i')
			{
				five(ptr);
				lenchar++;
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
			lenchar++;
		}
		else
		{
			i = i + 1;
			skiptwo = 0;
		}
	}
	return (lenchar);
}
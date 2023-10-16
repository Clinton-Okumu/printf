#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} conversion_match;

int write_pointer(va_list args_lists);
int write_hex_aux(unsigned long int num);
int write_hex_aux(unsigned long int num);
int write_exclusive_string(va_list args_lists);
int write_HEX(va_list args_lists);
int write_hex(va_list args_lists);
int write_oct(va_list args_lists);
int write_unsigned(va_list args);
int write_bin(va_list args_lists);
int write_srev(va_list args);
int write_rot13(va_list args);
int write_int(va_list args);
int write_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int write_37(void);
int write_char(va_list args_lists);
int write_string(va_list args_lists);
int put_char(char c);
int _printf(const char *format, ...);
#endif

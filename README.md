# 0x11. C - printf

## Description
`printf()` is a widely used C programming language function provided by the standard library `<stdio.h>`.
It is used to write formatted output to the console or other output streams. With `printf()`, you can display text, numbers, and other data in a structured and customizable way. It's a fundamental function for displaying information in C programs, making it a vital tool for developers.

## Authorized functions and resources
write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)

## Compilation
The code was compiled using the following command:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
The main files include your main header file, which is main.h: #include "main.h"

## Specifiers

| Specifier | Output                                  | Examples                  |
|-----------|-----------------------------------------|---------------------------|
| c         | Character                               | 'y'                       |
| d or i    | Signed Integer                          | 1024, -1024               |
| s         | String of Characters                    | "printf() project"               |
| b         | Binary Representation (unsigned)         | 01010110                  |
| u         | Unsigned Integer                        | 1024                      |
| o         | Unsigned Octal                          | 432                       |
| x         | Unsigned Hexadecimal Integer (lowercase)| 3ca                       |
| X         | Unsigned Hexadecimal Integer (uppercase)| 3CA                       |
| S         | String with Hex-ASCII Replacing Special Characters | "\x0A\x0A"          |
| p         | Pointer Address                         | 0x403212                  |
| r         | Reversed String of Characters           | "dlroW olleH"             |
| R         | ROT13 Translation of String             | "Uryyb"                   |

## Flag Specifiers

| Flag   | Description                                                                                           |
|--------|-------------------------------------------------------------------------------------------------------|
| -      | Left-justify the output within the field width; right justification is the default (width sub-specifier). |
| +      | Precedes the result with a plus or minus sign (+ or -), even for positive numbers. By default, only negative numbers are preceded by a - sign. |
| (space)| If no sign is going to be written, a blank space is inserted before the value. |
| #      | Used with o, x, or X specifiers. The value is preceded by 0, 0x, or 0X, respectively, for values different from zero. |
| 0      | Left-pads the number with zeroes (0) instead of spaces when padding is specified (width sub-specifier). |

## Width Specifiers

| Width    | Description                                                                                                             |
|----------|-------------------------------------------------------------------------------------------------------------------------|
| (number) | Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger. |
| *        | The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted. |

## Length Modifiers

| Modifier/Specifier | d & i                   | u, o, x, X              | c                       | s                       | p                       |
|--------------------|--------------------------|-------------------------|---------------------------|---------------------------|---------------------------|
| none               | int                      | unsigned int          | int                     | char                    | void pointer            |
| h                  | short int                | unsigned short int    |                         |                         |                         |
| l                  | long int                 | unsigned long int     |                         |                         |                         |

## Files
The Files used in the prototypes are explained as follows:

| Name               | Information                                                                         | Relevant Files                        |
|--------------------|-------------------------------------------------------------------------------------|---------------------------------------|
| man_3_write        | Man page of the `write` function.                                                  | None                                  |
| main.h             | Header file with the data type struct, standard libraries, and custom prototypes. | *.c compilation                       |
| write.c            | Main write function file. Calls other functions.                                   | write_(name of var).c file            |
| write_37.c         | Contains percentage print function.                                                | None                                  |
| write_int.c        | Contains decimal and integer functions.                                           | None                                  |
| write_char.c       | Custom function for char data type.                                                | None                                  |
| write_string.c     | Function that calls string type variable.                                          | None                                  |
| write_bin.c        | Function that gets the binary.                                                     | None                                  |
| write_oct.c        | Functions that return octal numbers.                                              | None                                  |
| write_hex.c        | Calls hexadecimal numbers (lowercase).                                             | None                                  |
| write_HEX.c        | Calls hexadecimal numbers (Uppercase).                                             | None                                  |
| write_unsigned.c   | Returns an unsigned data type.                                                    | None                                  |
| write_hex_aux.c    | Auxiliary function for hexadecimal-specific functions (lowercase).                 | write_exclusive_string.c             |
| write_HEX_aux.c    | Auxiliary function for hexadecimal-specific functions (Uppercase).                 | write_p.c                             |
| write_exclusive_string.c | Returns a string, and non-readable characters are printed in hexadecimal numbers (Lowercase). | write_hex_aux.c        |
| write_srev.c       | Returns a string in reverse.                                                       | None                                  |
| write_rot13.c      | Returns a string in Rot13.                                                        | None                                  |
| write_string.c        | Auxiliary functions such as strlen and strcpy.                                     | None                                  |
| put_char.c         | Custom put_char function.                                                          | None                                  |

## Tasks
### Task 1
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

### Task 2
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

### Task 3
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary

### Task 4
Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

### Task 5
Use a local buffer of 1024 chars in order to call write as little as possible.

### Task 6
Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

### Task 7
Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

### Task 8
Handle the following flag characters for non-custom conversion specifiers:

+
space
#

### Task 9
Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

### Task 10
Handle the field width for non-custom conversion specifiers.

### Task 11
Handle the precision for non-custom conversion specifiers.

### Task 12
Handle the 0 flag character for non-custom conversion specifiers.

### Task 13
Handle the - flag character for non-custom conversion specifiers.

### Task 14
Handle the following custom conversion specifier:

r : prints the reversed string

### Task 15
Handle the following custom conversion specifier:

R: prints the rot13'ed string

### Task 16
All the above options work well together.

## Authors ©
. Gideon Kiplagat.
. Clinton Okumu
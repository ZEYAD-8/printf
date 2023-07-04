#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>


/**
 * struct nm - holds the specifiers with the corresponding functions
 * @specifier: a character that represents the required function
 * @function: the required corresponding function
*/
typedef struct nm
{
	char specifier;
	int (*function)(va_list);
} identifiers;


int _printf(const char *format, ...);
int _putchar(char c);
int printC(va_list args);
int printS(va_list args);
int printI(va_list args);
int printPercent(__attribute__((unused)) va_list args);
int print_Bi(va_list args);
int printUnsigned(va_list args);
int printReverse(va_list args);
int printROT13(va_list args);
int printStirngS(va_list args);
int printHEX(va_list args);
int printHex(va_list args);
int printOctal(va_list args);
int printPointer(va_list args);
#endif


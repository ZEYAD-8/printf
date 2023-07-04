#include "main.h"
/**
 * printC - Prints a character
 * @args: list of arguments
 * Return: the amount of characters printed - 1.
 */
int printC(va_list args)
{
	return (_putchar(va_arg(args, int)));
}


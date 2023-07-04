#include "main.h"
/**
 * printReverse - prints a reversed string
 * @args: list of arguments
 * Return: the number of characters printed
*/
int printReverse(va_list args)
{
	char *strin;
	int i, printed_chars;

	strin = va_arg(args, char *);
	printed_chars = 0;
	for (i = strlen(strin) - 1; i >= 0; i--, printed_chars++)
	{
		_putchar(strin[i]);
		printed_chars++;
	}

	return (printed_chars);
}


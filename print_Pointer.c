#include "main.h"
/**
 * printPointer - displays the pointer in hexadecimal form
 * @args: list of arguments
 * Return: number of digits printed
*/
int printPointer(va_list args)
{
	int i, printed;
	char address_string[18];
	char hex[] = "0123456789abcdef";
	char *argument = va_arg(args, void *);
	uintptr_t address = (uintptr_t) argument;

	for (i = 0; i < 19; i++)
		address_string[i] = '*';

	for (i = 0; i < 16; i++)
		address_string[i] = hex[(address >> (60 - i * 4)) & 0xf];
	address_string[16] = '\0';

	for (i = 0; i < 16; i++)
		if (address_string[i] != '0')
			break;

	_putchar('0');
	_putchar('x');
	for (printed = 2; i < 16; i++, printed++)
		_putchar(address_string[i]);
	return (printed);
}


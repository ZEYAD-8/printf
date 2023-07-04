#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	const char *ch;
	int i, chars_printed, id_found, identifiers_length;
	va_list args;
	identifiers pick[] = {{'s', printS}, {'c', printC}, {'d', printI},
	{'i', printI}, {'b', print_Bi}, {'%', printPercent}, {'u', printUnsigned},
	{'R', printROT13}, {'r', printReverse}, {'S', printStirngS}, {'o', printOctal}
	, {'X', printHEX}, {'x', printHex}, {'p', printPointer}};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	ch = format;
	chars_printed = 0;
	while (*ch != '\0' && (identifiers_length = 14))
	{
		if (*ch != '%')
			chars_printed += _putchar(*ch);
		else if (ch++)
		{
			if (*ch != '\0')
			{
				for (i = 0, id_found = 0; i < identifiers_length; i++)
					if (*ch == pick[i].specifier)
					{
						chars_printed += pick[i].function(args);
						id_found = 1;
					}
				if (!id_found && ch--)
					chars_printed += printPercent(args);
			}
			else
			{
				chars_printed += printPercent(args);
				break;
			}
		}
		ch++;
	}
	va_end(args);
	return (chars_printed);
}


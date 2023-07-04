#include "main.h"
/**
 * printROT13 - prints the string but with the characters shifted by 13
 * @args: list of arguments
 * Return: the number of characters printed
*/
int printROT13(va_list args)
{
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot    = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *strin;
	int len, i, j;

	strin = va_arg(args, char *);
	len = strlen(strin);
	for (i = 0; i < len; i++)
		for (j = 0; j < 52; j++)
			if (strin[i] == normal[j])
				_putchar(rot[j]);

	return (len);
}


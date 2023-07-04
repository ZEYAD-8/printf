#include "main.h"
/**
 * printS - Prints a string
 * @args: list of arguments
 * Return: the amount of characters printed.
 */
int printS(va_list args)
{
char *strin;
int len, i, num_printed;

strin = va_arg(args, char *);
if (strin == NULL)
return (-1);

len = (int) strlen(strin);
for (i = 0, num_printed = 0; i < len; i++, num_printed++)
_putchar(strin[i]);

return (num_printed);
}

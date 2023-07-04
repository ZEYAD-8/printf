#include "main.h"
/**
 * printI - Prints an integer
 * @args: list of arguments
 * Return: number of digits printed.
 */
int printI(va_list args)
{
int number, copy, digits, i, *arr, is_negative;

number = va_arg(args, int);
is_negative = 0;
if (number < 0)
{
is_negative = 1;
number *= -1;
}

copy = number;
digits = 0;
while (copy > 1)
{
copy /= 10;
digits++;
}
arr = malloc(digits *sizeof(int));

for (i = digits - 1; i >= 0; i--)
{
arr[i] = number % 10;
number /= 10;
}

if (is_negative)
_putchar('-');

for (i = 0; i < digits; i++)
_putchar('0' + arr[i]);

free(arr);
return (digits);
}

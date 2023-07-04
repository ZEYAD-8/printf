#include "main.h"
/**
 * printUnsigned - Prints an unsigned number
 * @args: list of arguments
 * Return: The amount of digits printed
 */
int printUnsigned(va_list args)
{
  unsigned int number, copy, *arr;
  int digits, i;

  number = va_arg(args, unsigned int);
  copy = number;

  digits = 0;
  while (copy > 1)
  {
    copy /= 10;
    digits++;
  }

  arr = malloc(digits * sizeof(unsigned int));
  for (i = digits - 1; i >= 0; i--)
  {
    arr[i] = number % 10;
    number /= 10;
  }

  for (i = 0; i < digits; i++)
    _putchar('0' + arr[i]);

  return (digits);
}

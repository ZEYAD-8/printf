#include "main.h"
/**
 * printStirngS - prints a normal string
 * but it'll be in hexadecimal if it's a non_printable character
 * @args: list of arguments
 * Return: Will return the number of characters printed
*/
int printStirngS(va_list args)
{
  char *strin;
  int len, i, num_printed, number, remainder[2], j, k;
  int normal[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  char hex[] = "0123456789ABCDEF";

  num_printed = 0;
  strin = va_arg(args, char *);
  len = (int) strlen(strin);
  for (i = 0; i < len; i++)
  {
    if (strin[i] > 32 && strin[i] < 127)
    {
      _putchar(strin[i]);
      num_printed++;
    }
    else
    {
      _putchar('\\');
      _putchar('x');
      num_printed += 2;
      number = strin[i];
      remainder[1] = number % 16;
      number /= 16;
      remainder[0] = number % 16;
      for (j = 0; j <= 1; j++)
        for (k = 0; k < 17; k++)
          if (remainder[j] == normal[k])
            _putchar(hex[k]);
      num_printed += 2;
    }
  }
  return (num_printed);
}

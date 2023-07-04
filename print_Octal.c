#include "main.h"
/**
 * printOctal - prints the unsigned integer as octal
 * @args: list of arguments
 * Return: number of digits printed
*/
int printOctal(va_list args)
{
  unsigned int num, copy, *arr;
  int i, len, j;

  num = va_arg(args, unsigned int);
  copy = num;
  i = 0;
  while (copy > 0)
  {
    copy /= 8;
    i++;
  }
  len = i;
  arr = malloc(len * sizeof(unsigned int));

  while (i > 0)
  {
    i--;
    arr[i] = num % 8;
    num /= 8;
  }

  for (i = 0; i < len; i++)
    _putchar('0' + arr[i]);

  free(arr);
  return (len);
}

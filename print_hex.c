#include "main.h"
/**
 * printHex - prints the unsigned int as a hexadecimal (lowercase)
 * @args: list of arguments
 * Return: number of characters printed
*/
int printHex(va_list args)
{
	unsigned int num, copy, *arr;
	int i, len, j;
	int normal[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	char hex[] = "0123456789abcdef";

	num = va_arg(args, unsigned int);
	i = 0;
	copy = num;
	while (copy > 0)
	{
		copy /= 16;
		i++;
	}
	len = i;
	arr = malloc(len * sizeof(unsigned int));
	while (i > 0)
	{
		i--;
		arr[i] = num % 16;
		num /= 16;
	}
	for (i = 0; i < len; i++)
		for (j = 0; j < 16; j++)
			if (arr[i] == (unsigned int) normal[j])
			{
				_putchar(hex[j]);
				break;
			}
	free(arr);
	return (len);
}


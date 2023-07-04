#include "main.h"
/**
 * printHEX - prints the unsigned int as a hexadecimal (uppercase)
 * @args: list of arguments
 * Return: number of characters printed
*/
int printHEX(va_list args)
{
	unsigned int num, copy, *arr;
	int i, len, j;
	int normal[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	char heX[] = "0123456789ABCDEF";

	num = va_arg(args, unsigned int);
	i = 0;
	copy = num;
	while (!(copy <= 0))
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
				_putchar(heX[j]);
				break;
			}
	free(arr);
	return (len);
}


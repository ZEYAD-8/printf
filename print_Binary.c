#include "main.h"
/**
 * print_Bi - Converts a number from base 10 to binary
 * @args: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_Bi(va_list args)
{
	unsigned int number, copy;
	int i, binary, len, *bi;

	i = 0;
	number = va_arg(args, unsigned int);
	copy = number;
	len = 0;
	while (copy > 0)
	{
		copy /= 2;
		len++;
	}
	bi = malloc(len * sizeof(int));

	while (number > 0)
	{
		bi[len - i] = number % 2;
		number = number / 2;
		i++;
	}

	for (binary = i - 1, i = 0; i <= binary; i++)
	{
		_putchar('0' + bi[len - binary + i]);
	}
	free(bi);
	return (i);
}


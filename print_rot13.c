#include "main.h"
#include <stdlib.h>

/**
 * print_R - prints a string in rot13
 * @R: string to print
 *
 * Return: number of chars printed
 */
int print_R(va_list R)
{
	char *mystr;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	mystr = va_arg(R, char *);
	if (mystr == NULL)
		mystr = "(ahyy)";
	for (i = 0; mystr[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == mystr[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(mystr[i]);
			count++;
		}
	}
	return (count);
}

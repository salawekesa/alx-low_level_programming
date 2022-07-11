#include "main.h"

/**
 * print_rev - print reverse order
 * @str: string
 *
 * Return: void
 */

void print_rev(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = len - 1 ; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

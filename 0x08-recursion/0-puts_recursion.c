#include "main.h"

/**
 * _puts_recursion - printing a string by using recursion
 * @s: String to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

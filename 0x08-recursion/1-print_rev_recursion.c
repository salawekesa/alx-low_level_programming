#include "main.h"

/**
 * _print_rev_recursion - printing a string in rev by use o recursion
 * @s: String to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

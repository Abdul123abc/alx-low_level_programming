#include "main.h"
#include <stdio.h>
/**
 * _puts - A function that prints a string, followed by a new
 * line.
 * @str: the string
 * Return: always 0
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}

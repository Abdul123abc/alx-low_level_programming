#include "main.h"
#include <stdio.h>
/**
 * _strlen - A function that returns the length of a string.
 * @s: the string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;
	while (s[len])
		len++;
	return (len);
	
}

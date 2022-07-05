#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks is a character is lowercase or uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
void jack_bauer(void)
{
	int a, b, c, d;
	for (a = '0'; a < '3'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (a >= 50 && b >= 52)
						break;
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
	int j = 1;

	while (j <= 10)
	{
		i = 0;

		while (i <= 14)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}

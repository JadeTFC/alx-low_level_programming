#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: sets the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
int i, j;

if (size > 0)
for (i = size; i > 0; i++)
{
for (j = i; j <= size; j++)
if (j >= i)
_putchar('#');
else
_putchar(' ');
_putchar('\n');
}
else
_putchar('\n');
}
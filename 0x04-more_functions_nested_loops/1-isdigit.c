#include "main.h"
/**
 * _isdigit - checks if the number is b/n 0 to 9
 * @c: input number
 * Return: 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

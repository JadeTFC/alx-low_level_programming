#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single digits.
 *
 * Return: 0
 */
int main(void)
{
int ASCII = 10;
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar(ASCII);
return (0);
}

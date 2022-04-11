#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Print single numbers in base 10.
 *
 * Return: 0
 */
int main(void)
{
int x;
int ASCII = 10;
for (x = 0; x < 10; x++)
{
printf("%d", x);
}
printf("%c", ASCII);
return (0);
}

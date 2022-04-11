#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print letters in reverse.
 *
 * Return : 0
 */
int main(void)
{
char ac;
char ASCII = '\n';
for (ac = 'z'; ac >= 'a'; ac--)
{
putchar(ac);
}
putchar(ASCII);
return (0);
}

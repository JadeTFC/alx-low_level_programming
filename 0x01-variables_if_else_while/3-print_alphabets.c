#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lower and upper alphabet on the same line
 *
 * Return: 0
 */
int main(void)
{

char ca;
char cA;
char ASCII = '\n';
for (ca = 'a'; ca <= 'z'; ca++)
{
putchar(ca);
}
for (cA = 'A'; cA <= 'Z'; cA++)
{
putchar(cA);
}
putchar(ASCII);
return (0);
}

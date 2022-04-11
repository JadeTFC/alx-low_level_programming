#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print the lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{

char ch;
char ASCII = '\n';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
putchar(ASCII);
return (0);
}

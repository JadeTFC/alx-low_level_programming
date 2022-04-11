#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Exclude q and e from lowercase
 *
 * Return: 0
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; ++n)
{
if (n != 'e' && n != 'q')
putchar(n);
}
putchar('\n');
return (0);
}

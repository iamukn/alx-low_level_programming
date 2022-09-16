#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: serves as a line holder
 *
 * Return: Always 0;
 */

void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
if (n <= 0)
{
_putchar('\n');
}
_putchar('\n');
return (0);
}


#include "main.h"

/**
 * print_diagonal- printing diagonals
 *
 * @n: IAMUKN
 *
 * Return 0;
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
else
{
for (i = 1; i <= n; ++i)
{
for (j = 1; j <= i; ++j)
_putchar(' ');
_putchar(92);
_putchar('\n');

}
}
}

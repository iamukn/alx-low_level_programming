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
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
	_putchar('\\');
_putchar('\n');
}


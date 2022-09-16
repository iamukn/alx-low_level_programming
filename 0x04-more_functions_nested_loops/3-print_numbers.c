#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print from 0-9
 *
 * Return: 0;
 */

void print_numbers(void)
{
int c;

c = 0;
for (c; c <= 9; c++)
{
_putchar(c);
}
_putchar('\n');
return;
}

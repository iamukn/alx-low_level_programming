#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print from 0-9
 *
 * Return: 0;
 */

void print_numbers(void)
{
int num;

num = 0;
while (num <= 9)
{
_putchar(num);
num++;
}
_putchar('\n');
return;
}

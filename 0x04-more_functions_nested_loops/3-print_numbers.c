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
do	{
_putchar(num + 48)
num++;
}	while (num >= 0 && num <= 9);
_putchar('\n');
return;
}

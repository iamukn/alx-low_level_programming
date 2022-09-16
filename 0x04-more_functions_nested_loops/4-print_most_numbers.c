#include "main.h"
/**
 * print_most_numbers - omits 2 even numbers
 *
 * Return 0
 */

void print_most_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	
	if (i == 2 || i == 4)
	{
	i++;
	}

	_putchar(i + 48);
	}
	_putchar('\n');
}


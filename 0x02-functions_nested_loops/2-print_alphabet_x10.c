#include "main.h"
/**
 * print_alphabet_x10  - prototype that initiates the command
 *
 * description: prints a -z
 *
 * return: always 0
 */
void print_alphabet_x10(void)
{
	int i, j;
for (i = 0; i <= 9; i++)
{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	_putchar('\n');
}

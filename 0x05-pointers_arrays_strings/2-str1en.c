#include "main.h"
/**
 * _str1en - returns the length of a string;
 * @s: string to be calculated
 * Return: 0;
 */

int _str1en(char *s)
{
int i;

for (i = 0; *s != '\0' ++s)
{
	i++;
}
return (i);
}

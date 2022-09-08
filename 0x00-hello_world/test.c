/**
 * main - initiates the function
 *
 * Description: prints the size of function
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
int main(void)
{
long int intType;
double doubleType;
printf("Size of L_int:%lu\n", sizeof(intType));
printf("Size of double:%zu\n", sizeof(doubleType));
return (0);
}

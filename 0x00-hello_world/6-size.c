/**
 * main - initiates the program
 *
 * Description: prints the size of variables
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
char charType;
int intType;
long int longInt;
long long longLong;
float floatType;
printf("Size of a char:%zu\n", sizeof(charType));
printf("Size of an int:%zu\n", sizeof(intType));
printf("Size of a long int:%zu\n", sizeof(longInt));
printf("Size of a long long:%zu\n", sizeof(longLong));
printf("Size of a float:%zu\n", sizeof(floatType));
return (0);
}
